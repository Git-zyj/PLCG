/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39581
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
    var_18 = ((/* implicit */unsigned short) ((unsigned long long int) min((10746494115550684815ULL), (((/* implicit */unsigned long long int) min((var_12), (var_3)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) (+(arr_0 [i_0] [i_1])));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1400238450U)) ? (arr_9 [i_0] [i_1] [i_0] [i_3] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) ^ (((/* implicit */long long int) 1400238446U))));
                            arr_14 [7U] [i_1] [i_2] [i_3] [7U] [i_4] = ((/* implicit */_Bool) ((var_13) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_0]))))) : (((((/* implicit */_Bool) 654778505U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1008))) : (var_7)))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned short) var_8);
                            arr_17 [i_0] [i_0] [i_0] [(unsigned short)18] = ((/* implicit */signed char) min((arr_16 [i_0] [i_0] [i_3] [i_5]), (((/* implicit */long long int) var_14))));
                            arr_18 [i_0] [i_0] = ((/* implicit */unsigned char) min((654778505U), (((/* implicit */unsigned int) (unsigned short)10))));
                            var_22 = ((/* implicit */long long int) (-(((unsigned int) arr_7 [(_Bool)1] [i_1] [i_0]))));
                        }
                        for (unsigned long long int i_6 = 2; i_6 < 18; i_6 += 2) 
                        {
                            var_23 |= ((/* implicit */unsigned int) min((((((/* implicit */long long int) min((arr_6 [i_0]), (arr_6 [i_0])))) & (var_10))), (var_12)));
                            var_24 = min((3312929672960905426LL), (((/* implicit */long long int) (unsigned short)10)));
                            var_25 = ((/* implicit */_Bool) min(((+(1353779211665640420LL))), (((/* implicit */long long int) ((unsigned char) 654778502U)))));
                            var_26 = ((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_2] [i_1] [14LL]);
                        }
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_7])) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_4 [(_Bool)1])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1))))) : (min((((/* implicit */long long int) var_9)), (-3312929672960905429LL)))));
                            var_28 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_10 [i_0] [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 1])) ? (((/* implicit */unsigned long long int) var_7)) : (arr_13 [i_7 - 1] [i_7] [i_7 - 1] [i_7] [i_2]))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_21 [(_Bool)1] [i_0] [i_2] [i_0] [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_7 - 1] [(_Bool)1] [4LL] [15LL] [4LL]))) : (max((var_10), (((/* implicit */long long int) var_4)))))))));
                            var_29 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((long long int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                            var_30 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_8))))))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_8 = 0; i_8 < 19; i_8 += 3) 
                        {
                            arr_27 [i_0] [i_1] [1ULL] [i_3] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_4)), (arr_25 [i_0] [i_1] [i_2] [(_Bool)1] [i_8])))) ? (((unsigned long long int) var_9)) : (((/* implicit */unsigned long long int) min((3312929672960905429LL), (3312929672960905446LL))))));
                            arr_28 [i_0] [i_8] [i_2] [i_0] [i_2] [(unsigned short)11] = ((/* implicit */long long int) var_14);
                            var_31 = ((/* implicit */long long int) var_2);
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_1] [6LL] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_13)), (arr_24 [i_1] [i_3] [6ULL]))))))) != (((/* implicit */int) ((unsigned short) arr_16 [i_0] [i_0] [i_0] [i_0])))));
                            var_32 = 3831540384625926861LL;
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_32 [i_9] = ((((unsigned long long int) (signed char)6)) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_10 [i_9] [i_9] [i_2] [i_3] [i_9])), (arr_20 [i_1] [i_1] [i_1] [i_3] [i_1]))) <= (((/* implicit */unsigned long long int) var_3)))))));
                            arr_33 [i_9] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                        }
                        var_33 &= ((/* implicit */_Bool) ((9223372036854775807LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)44)))));
                    }
                } 
            } 
            var_34 = ((/* implicit */unsigned short) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-28)));
            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_5 [i_0])))) ^ (arr_3 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) 2863474951U)) : (((((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_1] [18U] [i_0])) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])) : (((unsigned long long int) 3144530475195901205ULL))))));
        }
        arr_34 [i_0] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) (_Bool)1)) >> (((arr_16 [(unsigned short)11] [i_0] [i_0] [i_0]) + (7069113787475235136LL))))));
    }
}
