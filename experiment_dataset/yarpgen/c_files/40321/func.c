/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40321
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
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */int) arr_1 [i_0] [i_0]);
        arr_5 [i_0] = (~(min((((/* implicit */int) arr_0 [i_0 + 2])), (((((/* implicit */int) arr_1 [i_0 + 1] [i_0])) | (((/* implicit */int) (signed char)6)))))));
        arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((arr_2 [i_0 + 3]) >= (min((arr_2 [i_0]), (((/* implicit */long long int) (signed char)-13))))))) > (((((((/* implicit */int) arr_1 [i_0] [i_0])) | (((/* implicit */int) arr_0 [13ULL])))) >> (((var_4) + (418154848)))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        for (signed char i_2 = 1; i_2 < 24; i_2 += 4) 
        {
            {
                arr_11 [i_1] = ((/* implicit */_Bool) max(((~(((/* implicit */int) arr_7 [i_2] [i_2 + 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_4)))))))));
                /* LoopSeq 2 */
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    arr_16 [i_1] [i_1] [i_3] [i_1] = (+(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)6)))));
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */int) (unsigned char)3)) : (-1735501891)))) & (((((-8262219851005559893LL) + (9223372036854775807LL))) << (((1735501890) - (1735501890)))))));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) max((((long long int) (_Bool)1)), (min((((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4]))) & (-8262219851005559893LL))), (((/* implicit */long long int) arr_10 [i_2 + 1] [i_2 + 1])))))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 23; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 22; i_6 += 2) 
                        {
                            {
                                arr_24 [i_1] [i_2] [i_4] = ((/* implicit */long long int) var_4);
                                var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((-2147483641), (((/* implicit */int) (signed char)76))))), (min((((/* implicit */unsigned long long int) -8453650311161442048LL)), (273470362877687371ULL)))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */signed char) arr_7 [i_1] [i_1]);
                    var_19 += ((/* implicit */unsigned long long int) -5512416240263095668LL);
                    arr_25 [i_1] [(_Bool)1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) 2088098502)), (8262219851005559893LL)));
                }
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_20 [i_1] [i_2]))));
                /* LoopNest 2 */
                for (unsigned char i_7 = 3; i_7 < 23; i_7 += 4) 
                {
                    for (int i_8 = 1; i_8 < 24; i_8 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) max((arr_29 [i_1] [i_7] [i_2 - 1] [i_1]), (((/* implicit */int) ((arr_18 [i_2 - 1] [i_7 - 1] [i_2 - 1]) || (((/* implicit */_Bool) 13425050699873989452ULL)))))));
                            var_22 = ((/* implicit */int) 6898618042115560939LL);
                            arr_31 [i_1] [i_1] [i_1] [i_1] [i_8] [i_1] = ((/* implicit */long long int) var_13);
                            arr_32 [i_1] [i_1] = ((/* implicit */signed char) min((((unsigned long long int) arr_21 [9LL] [i_7] [i_2 + 1] [i_1])), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1735501887)))))) > (arr_23 [i_1] [i_1] [i_2 - 1] [i_1] [i_1]))))));
                            arr_33 [i_1] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) max((((2493560198736739790LL) >> (((max((7609969341630244858ULL), (((/* implicit */unsigned long long int) var_12)))) - (7609969341630244847ULL))))), (((/* implicit */long long int) (signed char)-109))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 |= ((/* implicit */signed char) ((((var_4) + (2147483647))) >> (((min(((-(((/* implicit */int) (signed char)109)))), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (var_14)))))) + (116)))));
}
