/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235274
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
    var_10 = ((/* implicit */int) 1751259082U);
    var_11 = ((/* implicit */_Bool) var_8);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_4)), (var_5)));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) /* same iter space */
                {
                    var_13 = ((/* implicit */short) var_7);
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)28))) / (1751259092U)))) ? ((+(16985655547984634794ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_0 - 1])))));
                    arr_8 [i_0 - 1] [i_0] [i_2] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (max((((/* implicit */unsigned long long int) (unsigned char)254)), (112545118473518150ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_0 - 1] [i_0 - 1])) > (((/* implicit */int) arr_6 [i_0] [i_0 - 1] [i_2]))))))));
                }
                for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned char) var_0);
                        var_16 = var_8;
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) max((var_4), ((unsigned char)47))))))), (12612415995636672043ULL)))));
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_3] [i_3] [i_5]))) : (max((((/* implicit */long long int) var_9)), (var_5)))));
                        /* LoopSeq 1 */
                        for (short i_6 = 4; i_6 < 15; i_6 += 1) 
                        {
                            arr_20 [i_0 - 1] [13U] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) - (9955902311987301213ULL)))) ? (max((12612415995636672043ULL), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (1751259085U) : (max((max((((/* implicit */unsigned int) (_Bool)1)), (2543708213U))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)28)) >= (((/* implicit */int) (unsigned char)0)))))))));
                            var_19 = ((/* implicit */long long int) (unsigned char)0);
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (unsigned char)251))));
                            var_21 = max((((((/* implicit */_Bool) max(((unsigned char)58), (arr_7 [i_0])))) ? (((((/* implicit */int) var_9)) | (((/* implicit */int) (unsigned char)43)))) : (15))), (((/* implicit */int) var_1)));
                        }
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        arr_23 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(max((2543708213U), (arr_10 [i_0 - 1])))));
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */long long int) var_4))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)71)), (arr_15 [i_0] [i_0] [i_0 - 1])))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)198)) : (((/* implicit */int) (unsigned char)255))))) : (arr_0 [i_3] [i_7]))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (var_6))))));
                        var_23 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_0 [i_0 - 1] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))))), (((/* implicit */unsigned long long int) (_Bool)0))));
                        arr_24 [i_7] [i_3] [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned short)48826)) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) arr_13 [i_0])))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_13 [i_0])) : (((/* implicit */int) var_4))))));
                    }
                    /* LoopNest 2 */
                    for (short i_8 = 3; i_8 < 14; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 2; i_9 < 15; i_9 += 1) 
                        {
                            {
                                var_24 ^= ((/* implicit */long long int) (unsigned char)76);
                                var_25 = ((/* implicit */_Bool) min((var_25), ((_Bool)0)));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned char)62)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0]))))), (((/* implicit */long long int) 97526721U))));
                }
                /* vectorizable */
                for (unsigned char i_10 = 0; i_10 < 16; i_10 += 3) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned short) -870989382);
                    arr_34 [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned char)0);
                }
            }
        } 
    } 
}
