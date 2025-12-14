/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212692
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((/* implicit */short) (unsigned char)154);
        var_11 = 188099434;
        var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)1957)) : (((/* implicit */int) arr_0 [(unsigned short)6] [i_0 - 1])))), ((((_Bool)1) ? (((/* implicit */int) (unsigned short)54159)) : (((/* implicit */int) (short)1957)))))))));
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!((_Bool)1)))) & (((/* implicit */int) min((arr_0 [6ULL] [i_0 - 1]), (((/* implicit */unsigned short) arr_2 [10]))))))))));
    }
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) var_2))));
    /* LoopSeq 3 */
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                {
                    arr_10 [i_2] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)60039)));
                    arr_11 [i_1] [(unsigned short)11] [i_2] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) -188099435)) && (((/* implicit */_Bool) (unsigned short)46597)))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_4 = 3; i_4 < 14; i_4 += 4) /* same iter space */
        {
            var_15 = ((((/* implicit */_Bool) 5983138085908143764ULL)) && (((((/* implicit */_Bool) (unsigned short)62443)) || (((/* implicit */_Bool) 12463605987801407874ULL)))));
            var_16 ^= (unsigned char)49;
            var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_1] [i_4 + 2] [i_1])) << (((((arr_9 [i_1] [i_4 + 2] [i_4]) - (((/* implicit */int) (unsigned short)65520)))) - (1854034391)))));
            var_18 += ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)2))))) % (((/* implicit */int) (unsigned char)24))));
        }
        /* vectorizable */
        for (long long int i_5 = 3; i_5 < 14; i_5 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)216)) * (((/* implicit */int) (unsigned short)0))));
            arr_18 [i_1] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)44382)) * (((/* implicit */int) (unsigned char)155))));
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((arr_9 [i_5 + 1] [i_5 - 3] [i_1]) & (((/* implicit */int) (unsigned short)56892)))))));
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) (short)-21490)) % (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 686130302771100660ULL)))))));
        }
        for (long long int i_6 = 2; i_6 < 15; i_6 += 4) 
        {
            var_22 = ((/* implicit */short) var_4);
            var_23 = ((/* implicit */int) max((var_23), (((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned short)22391)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)65532))))))))))));
            arr_22 [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)21180)), (((((/* implicit */_Bool) (unsigned short)56868)) ? (((/* implicit */int) (unsigned short)12820)) : (((/* implicit */int) (short)-1957))))));
        }
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_26 [i_7] = ((/* implicit */long long int) max((var_1), (((/* implicit */unsigned short) (unsigned char)124))));
        arr_27 [(unsigned short)0] = ((/* implicit */int) (unsigned short)56834);
    }
    for (long long int i_8 = 0; i_8 < 20; i_8 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_9 = 1; i_9 < 17; i_9 += 2) 
        {
            for (unsigned short i_10 = 1; i_10 < 19; i_10 += 2) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_24 = ((/* implicit */unsigned short) min((var_24), (var_7)));
                        var_25 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (short)9)) ? (((/* implicit */int) (unsigned char)111)) : (((/* implicit */int) var_0)))) % (((/* implicit */int) arr_36 [i_8] [i_9] [i_11])))) >> (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        } 
        var_26 = arr_24 [i_8];
    }
    var_27 |= ((/* implicit */unsigned short) (_Bool)1);
}
