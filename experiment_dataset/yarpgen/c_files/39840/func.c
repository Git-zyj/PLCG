/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39840
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
    var_10 = ((/* implicit */long long int) (~((((~(((/* implicit */int) var_8)))) * (((/* implicit */int) (_Bool)1))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_11 += ((/* implicit */short) ((((((((/* implicit */_Bool) var_3)) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [(unsigned short)17]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)2)))))));
        var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_0]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 3) 
            {
                for (int i_4 = 2; i_4 < 17; i_4 += 1) 
                {
                    {
                        arr_15 [i_1] [i_1] [i_3] [i_3 + 1] [i_4] = ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)54257)), (arr_4 [i_1])))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)101)) > (((/* implicit */int) var_5))))) : ((~(((/* implicit */int) arr_7 [i_3] [i_3] [i_3])))))) == (((((/* implicit */int) var_6)) | (((/* implicit */int) (short)18))))));
                        var_13 ^= (~(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)54257)) || (var_6))))));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */unsigned int) ((((((/* implicit */int) (short)-16410)) + (2147483647))) << (((((/* implicit */int) arr_14 [i_1] [i_1] [(short)2] [(short)2] [i_1] [i_1])) - (163)))));
    }
    var_15 = ((/* implicit */unsigned long long int) var_7);
    var_16 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        for (short i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            for (unsigned int i_7 = 1; i_7 < 16; i_7 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (+(arr_16 [i_6] [i_6]))))));
                    arr_24 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) var_3);
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_6))));
                    /* LoopSeq 4 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_27 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */int) ((((unsigned long long int) arr_20 [i_7 + 2] [i_5] [i_7 + 2])) << ((+(((/* implicit */int) arr_21 [i_5] [i_5]))))));
                        arr_28 [i_5] [i_5] [8ULL] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) (unsigned short)10218)))));
                    }
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 3) 
                        {
                            var_19 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_17 [i_7 - 1] [i_6])))))))));
                            var_20 = ((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (unsigned char)209)))), (((/* implicit */int) ((unsigned char) arr_29 [i_5] [i_7 + 4] [i_9] [i_9 + 1])))));
                            var_21 = var_2;
                        }
                        for (unsigned short i_11 = 0; i_11 < 20; i_11 += 2) 
                        {
                            arr_37 [i_5] [i_5] [i_7 + 1] [4] [i_6] [(short)2] |= ((/* implicit */long long int) (((+(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned char)120))))))) * (((/* implicit */int) ((((/* implicit */int) min((var_5), (((/* implicit */short) arr_19 [i_11]))))) == ((-(((/* implicit */int) (short)-16428)))))))));
                            arr_38 [i_5] = (+((~(((-531901247) % (((/* implicit */int) (short)-3)))))));
                            arr_39 [i_5] [i_7 + 4] [i_9 + 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_9)))))))));
                            var_22 = (-(((/* implicit */int) var_6)));
                            arr_40 [i_5] [i_6] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */int) arr_35 [i_7] [i_9 + 1] [i_11])) == (((/* implicit */int) (unsigned short)11279))));
                        }
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)11261)) > (((/* implicit */int) (_Bool)1))));
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32767)) ? (3145728) : (((/* implicit */int) (_Bool)1))));
                        arr_41 [i_5] [i_6] [i_5] = ((/* implicit */unsigned char) min((max((((/* implicit */int) arr_32 [i_5] [i_6] [i_7] [6LL] [i_5])), ((-(((/* implicit */int) (_Bool)0)))))), (((((/* implicit */int) min((arr_36 [i_5] [i_6] [i_5] [i_5] [i_7 + 1]), (((/* implicit */short) var_9))))) - (((/* implicit */int) min((arr_36 [i_5] [(unsigned char)14] [i_7 - 1] [i_9 + 1] [i_9 + 1]), (arr_32 [(short)5] [i_6] [i_6] [i_6] [1LL]))))))));
                    }
                    for (int i_12 = 4; i_12 < 19; i_12 += 1) 
                    {
                        arr_45 [(unsigned short)8] [3ULL] [i_5] [(unsigned short)8] = ((/* implicit */short) ((_Bool) max((((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1))))), ((unsigned short)3968))));
                        var_25 = ((/* implicit */unsigned long long int) var_1);
                        arr_46 [i_5] [i_5] [9U] [(unsigned short)10] [i_5] [i_5] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) ((unsigned long long int) 3765746753656948634ULL))) || (((/* implicit */_Bool) arr_22 [(unsigned short)10] [i_6] [i_6]))))));
                    }
                    for (unsigned short i_13 = 0; i_13 < 20; i_13 += 4) 
                    {
                        arr_51 [i_5] [i_5] = max(((+(arr_29 [(unsigned short)8] [(short)10] [i_7 + 2] [9ULL]))), (-1713110996));
                        arr_52 [i_5] [i_7] [i_5] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) arr_43 [i_5] [i_5] [i_7 + 1] [i_7 + 2] [i_5])) != (((289077754) - (((/* implicit */int) var_9)))))))));
                    }
                }
            } 
        } 
    } 
}
