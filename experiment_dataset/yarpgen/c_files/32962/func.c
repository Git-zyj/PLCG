/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32962
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_10 = ((((/* implicit */int) (short)10751)) & (((/* implicit */int) (unsigned short)65534)));
                var_11 = ((((((arr_6 [i_0 + 1] [12]) + (var_2))) + (((var_3) - (((/* implicit */unsigned long long int) var_8)))))) + (((((var_7) + (((/* implicit */unsigned long long int) -9223372036854775787LL)))) + (((/* implicit */unsigned long long int) var_6)))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_12 ^= ((/* implicit */_Bool) ((((((/* implicit */int) ((var_3) != (((/* implicit */unsigned long long int) 9223372036854775802LL))))) & (((352003605) & (((/* implicit */int) (signed char)-7)))))) + (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 6218970280607637976LL)) % (12162283734618289500ULL)))))))));
                            var_13 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) arr_10 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1])) / (1408971957145060386ULL))) - (((var_2) / (var_1)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 18; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (int i_6 = 0; i_6 < 21; i_6 += 4) 
                            {
                                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) 1166629551)) - (16777216ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) || (arr_11 [i_4 + 2] [i_1] [i_4 + 2] [i_6]))))))))));
                                arr_20 [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_10 [i_0 - 1] [9] [i_4 - 1] [i_5]) != (((/* implicit */int) arr_17 [i_0] [i_0 - 1] [i_4 + 1] [i_0] [i_1] [i_6] [i_6]))))) - (((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) (short)32759)))))));
                                arr_21 [i_0] [i_1] [i_1] [i_1] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_18 [i_6] [5ULL] [i_4 + 3] [i_4 + 3] [i_6] [(_Bool)0]) / (arr_18 [i_6] [i_1] [i_0 + 1] [i_4 - 1] [i_6] [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)248)) / (92483519))))));
                            }
                            for (int i_7 = 3; i_7 < 18; i_7 += 4) 
                            {
                                arr_24 [i_1] [17ULL] [17ULL] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_7] [i_7 - 3] [i_7] [i_7] [i_7 - 3]))) & (var_9))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)1902))) != (var_8)))))));
                                var_15 = ((/* implicit */int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)20742))) | (18014396361998336ULL))) & (((var_1) - (arr_4 [i_0]))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_10 [4] [i_1] [i_4] [4U])) | (6383890869089443494ULL)))) && (((var_6) > (((/* implicit */int) var_0))))))))));
                                arr_25 [15ULL] [i_1] [17] [17] [i_1] = ((/* implicit */int) ((((var_9) % (var_1))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) == (((/* implicit */int) arr_17 [i_7 - 1] [i_7] [i_1] [i_5] [i_1] [i_5] [i_5]))))))));
                            }
                            arr_26 [i_1] [9LL] [i_4 + 2] [i_1] [(short)14] [i_1] = ((((((var_1) % (((/* implicit */unsigned long long int) arr_7 [20LL] [20LL] [i_0] [i_0])))) + (var_1))) << (((((/* implicit */int) ((((/* implicit */unsigned long long int) 349298466)) <= (var_3)))) | (((/* implicit */int) ((((/* implicit */_Bool) 65535)) || (((/* implicit */_Bool) 1235806209))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)111))) & (var_9))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) var_7)))))) & (var_9)))));
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) var_3))));
    var_18 = ((/* implicit */int) max((var_18), (((((((-2147483626) ^ (-1149739760))) >> (((((/* implicit */int) (unsigned char)197)) - (197))))) >> (((var_8) - (369454864U)))))));
}
