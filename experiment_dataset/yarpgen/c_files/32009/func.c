/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32009
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) var_3)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_2] [i_1] [i_0])) + (((/* implicit */int) arr_4 [(unsigned short)0]))))) : (arr_5 [i_0] [i_1]))) <= (((/* implicit */long long int) min((min((4107284970U), (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) var_2)))))));
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_0))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_3 = 1; i_3 < 22; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 3; i_5 < 22; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 3; i_6 < 22; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 1; i_7 < 23; i_7 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_15)), (((((/* implicit */unsigned long long int) var_15)) + (var_13)))))) ? ((~(((/* implicit */int) arr_4 [i_7 - 1])))) : (((/* implicit */int) arr_15 [i_3] [i_4] [i_5] [(short)21]))));
                                var_20 = ((/* implicit */unsigned short) ((short) 9461491437863485158ULL));
                                arr_23 [i_3] [i_4] [i_3] = ((/* implicit */_Bool) (+(var_9)));
                            }
                        } 
                    } 
                    var_21 += ((/* implicit */signed char) var_1);
                }
            } 
        } 
        arr_24 [i_3 + 1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) 3015585370705444942ULL)) ? (-4969443192082888125LL) : (((/* implicit */long long int) 65408U))));
        var_22 = ((/* implicit */unsigned short) max((((/* implicit */long long int) min((((((/* implicit */_Bool) arr_13 [i_3] [i_3])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_12 [i_3] [4] [i_3])))), ((-(var_15)))))), ((+(arr_5 [i_3 + 1] [i_3 + 1])))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 2) 
    {
        arr_27 [i_8] [i_8] = ((/* implicit */unsigned char) ((var_14) != (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_8] [i_8] [i_8])))));
        /* LoopSeq 1 */
        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 3) 
        {
            var_23 = ((/* implicit */long long int) var_16);
            arr_31 [i_9] = ((/* implicit */unsigned char) ((_Bool) ((min((((/* implicit */unsigned long long int) var_3)), (9244903855120944471ULL))) + (((/* implicit */unsigned long long int) var_17)))));
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((min((4969443192082888107LL), (((/* implicit */long long int) 33554432)))) != (((/* implicit */long long int) 4294901870U)))) ? (min((min((arr_20 [i_8] [i_8] [i_9] [i_9] [i_9]), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) == (arr_7 [i_8] [i_9] [i_9] [i_9])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
            arr_32 [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) * (arr_19 [i_8] [i_8] [i_8] [i_8]))) % (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (_Bool)0)))), (((var_6) ? (((/* implicit */int) arr_3 [i_9])) : (((/* implicit */int) var_2)))))))));
            arr_33 [i_8] [i_9] [i_9] = ((/* implicit */_Bool) ((min((min((33554429), (arr_18 [i_8] [i_8] [i_8] [i_9]))), (((/* implicit */int) ((unsigned short) arr_25 [i_9] [i_8]))))) * ((+(((/* implicit */int) arr_6 [i_8] [i_8] [i_8]))))));
        }
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 11; i_10 += 2) 
    {
        var_25 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) >> ((((-(((/* implicit */int) (_Bool)1)))) + (25)))));
        arr_36 [i_10] = ((/* implicit */_Bool) (+(2147483647)));
        arr_37 [i_10 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)1)) : (33554432)));
        arr_38 [i_10 - 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_10]))));
        var_26 = (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_10]))) ^ (var_11))));
    }
    var_27 = ((/* implicit */int) ((unsigned int) ((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) 8641506595115262101LL)) : (9884990768933568698ULL))) % (var_13))));
    var_28 = ((/* implicit */short) ((((/* implicit */int) var_1)) != (((/* implicit */int) ((unsigned char) 4983440800745264702LL)))));
}
