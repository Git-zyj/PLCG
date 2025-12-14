/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2660
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
    var_15 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (-(16773120U)))))) ? (((/* implicit */unsigned long long int) min((-249070059), (((/* implicit */int) var_3))))) : (8191ULL)));
    var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) max((max((max((arr_1 [i_0] [10LL]), (((/* implicit */unsigned short) (short)12499)))), (((/* implicit */unsigned short) arr_0 [i_0])))), (((/* implicit */unsigned short) (((~(((/* implicit */int) (_Bool)1)))) >= (((((/* implicit */int) arr_0 [i_0])) ^ (var_4)))))))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_18 = ((/* implicit */_Bool) (-((-(((/* implicit */int) (_Bool)1))))));
            var_19 = ((/* implicit */unsigned long long int) ((((unsigned int) ((unsigned long long int) (_Bool)1))) > (((/* implicit */unsigned int) ((/* implicit */int) (short)12496)))));
        }
    }
    for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (~(max((2465449997U), (((/* implicit */unsigned int) arr_9 [i_3])))))))));
            arr_10 [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 1953279456U)))) : (max((12507695578980840573ULL), (((/* implicit */unsigned long long int) (signed char)-52))))))) ? (((/* implicit */unsigned long long int) max((1953279456U), (((/* implicit */unsigned int) ((short) arr_8 [i_2] [i_3] [i_3])))))) : (((unsigned long long int) 1991677606)));
            /* LoopNest 3 */
            for (signed char i_4 = 3; i_4 < 20; i_4 += 3) 
            {
                for (unsigned char i_5 = 4; i_5 < 18; i_5 += 4) 
                {
                    for (signed char i_6 = 4; i_6 < 19; i_6 += 4) 
                    {
                        {
                            var_21 += arr_9 [i_2];
                            var_22 += ((/* implicit */unsigned long long int) arr_16 [i_2] [i_5] [i_4] [i_5] [(unsigned char)2]);
                            var_23 = ((/* implicit */_Bool) arr_8 [i_2] [i_4 - 3] [i_2]);
                            arr_17 [i_5] [i_5] [i_5] [i_5] [(short)0] [i_5 - 3] |= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((unsigned long long int) arr_11 [i_5] [i_3] [i_3] [i_3]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_6 + 2] [(unsigned char)6] [i_4 - 1] [i_6 + 2] [i_6] [i_5 - 1] [i_4]))) : (((unsigned int) var_6))))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            arr_20 [i_2] = ((max((min((((/* implicit */unsigned int) var_4)), (arr_4 [i_2] [i_2]))), (((/* implicit */unsigned int) arr_7 [i_7 + 1] [i_7])))) % (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) max((arr_16 [(short)14] [i_2] [i_2] [i_2] [i_2]), (((/* implicit */unsigned char) (_Bool)1))))), (min((((/* implicit */unsigned short) (_Bool)0)), (arr_11 [i_2] [i_2] [i_7 + 1] [i_7]))))))));
            var_24 += ((((/* implicit */_Bool) max((arr_18 [i_7] [i_7 + 1]), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */int) ((unsigned char) (signed char)52))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [(unsigned short)10] [i_7] [i_7 + 1] [i_2]))))));
        }
        arr_21 [i_2] [i_2] = ((/* implicit */unsigned long long int) (+((~(arr_14 [i_2])))));
    }
    /* vectorizable */
    for (signed char i_8 = 0; i_8 < 23; i_8 += 4) 
    {
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)33)) ? (-1252925396) : (((/* implicit */int) arr_23 [i_8]))))) ? (((/* implicit */int) (_Bool)1)) : (1817270483)));
        arr_24 [i_8] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) 753629803)) && ((_Bool)1))))));
        var_26 |= ((/* implicit */unsigned long long int) ((var_10) ? (((/* implicit */int) (unsigned char)204)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_8])) && (((/* implicit */_Bool) 2141174968U)))))));
        arr_25 [i_8] [i_8] = ((/* implicit */int) ((unsigned short) var_9));
        arr_26 [i_8] = ((/* implicit */unsigned char) (signed char)52);
    }
    for (short i_9 = 1; i_9 < 17; i_9 += 4) 
    {
        arr_30 [i_9 + 1] = ((/* implicit */unsigned int) (((+(var_13))) != (((/* implicit */int) ((_Bool) max((arr_7 [i_9] [i_9]), (((/* implicit */unsigned char) (_Bool)1))))))));
        var_27 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))), ((~(((var_3) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(unsigned short)0] [(unsigned short)0] [i_9 + 1] [i_9 + 2])))))))));
    }
}
