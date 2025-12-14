/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2769
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
    var_12 &= ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_0))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8)))))));
    var_13 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_10)) || (((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_11)))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)92))))) / (var_1))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)92)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) var_8)), (arr_0 [i_0])))))) ? (min((max((arr_1 [i_1]), (((/* implicit */unsigned long long int) arr_0 [i_1])))), (((/* implicit */unsigned long long int) ((_Bool) arr_6 [(signed char)10] [i_1] [(signed char)10] [i_0]))))) : (((/* implicit */unsigned long long int) -1255369054066658465LL))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) /* same iter space */
                    {
                        var_14 += ((/* implicit */unsigned int) arr_8 [i_0] [i_0] [(_Bool)1] [i_0]);
                        var_15 = ((/* implicit */unsigned char) arr_0 [18ULL]);
                        var_16 |= ((/* implicit */unsigned char) arr_4 [i_0] [i_1] [i_2]);
                        var_17 = ((/* implicit */unsigned char) ((arr_5 [i_3] [i_1] [i_0]) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) min((arr_5 [i_0] [i_0] [2U]), (arr_5 [i_1] [i_2] [i_3]))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
                    {
                        arr_12 [i_0] [i_1] [i_4] = ((arr_6 [i_0] [i_4] [(signed char)8] [i_4]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (2187455837005498163ULL));
                        var_18 = ((/* implicit */signed char) -4917253427536709899LL);
                    }
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (int i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            arr_19 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)64))) ^ (arr_4 [i_5] [i_5] [i_5])))));
                            var_19 = ((/* implicit */unsigned short) min((var_19), (var_5)));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_24 [i_0] = ((((/* implicit */_Bool) 10498697672958281979ULL)) ? (2737714537106487603LL) : (-1255369054066658465LL));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)24))) % (((long long int) var_9))));
                        }
                        for (signed char i_8 = 0; i_8 < 19; i_8 += 1) 
                        {
                            var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((arr_5 [i_0] [i_2] [(signed char)5]) ? (((/* implicit */int) arr_5 [i_2] [i_5] [i_8])) : (((/* implicit */int) arr_5 [i_5] [(signed char)15] [i_0])))) : (((((/* implicit */int) var_5)) << (((((arr_27 [i_0] [i_1] [i_0] [i_1]) + (711318183015136225LL))) - (10LL)))))));
                            var_22 = ((/* implicit */_Bool) (+(((long long int) min((((/* implicit */long long int) 0U)), (-2747899932355090734LL))))));
                            arr_29 [i_0] [i_1] [i_1] [i_1] [i_1] [i_8] = ((/* implicit */unsigned long long int) ((short) arr_14 [i_0] [i_1] [i_2] [i_2] [11ULL] [i_0]));
                            arr_30 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (((~(1255369054066658451LL))) & (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (-1709056121) : (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [10ULL] [i_0] [13ULL] [(unsigned short)18]))))) ? (((/* implicit */int) arr_14 [i_8] [11ULL] [(_Bool)1] [i_2] [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (arr_27 [i_0] [i_0] [i_5] [i_0])))))))));
                        }
                        var_23 ^= ((/* implicit */_Bool) ((long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (4294967295U)))) + (((((/* implicit */_Bool) arr_9 [(unsigned char)17] [i_1] [(unsigned char)17])) ? (arr_23 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [(unsigned char)16] [i_0]))))))));
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((var_6) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)43649)) ? (1925032036080568174LL) : (((/* implicit */long long int) -637637894))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ (((16259288236704053445ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
    var_25 = ((/* implicit */long long int) var_5);
}
