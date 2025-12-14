/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229485
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
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            arr_8 [i_1] [i_1 - 1] [i_2] [17U] = ((/* implicit */short) (unsigned short)25149);
                            var_17 = ((/* implicit */int) ((((long long int) arr_0 [i_1 + 1] [i_1 - 1])) | (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                            var_18 = (unsigned short)52351;
                            var_19 = ((/* implicit */unsigned short) var_15);
                            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_14)) < (2147483647))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)64))))) : (max((arr_5 [i_0] [i_1] [i_0]), (((/* implicit */int) (signed char)-108))))))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-94))));
                /* LoopNest 2 */
                for (short i_4 = 3; i_4 < 16; i_4 += 3) 
                {
                    for (unsigned short i_5 = 1; i_5 < 17; i_5 += 3) 
                    {
                        {
                            var_22 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((min((((/* implicit */int) (signed char)-108)), (arr_11 [12LL] [i_1 + 1]))), (((/* implicit */int) max(((signed char)108), ((signed char)82)))))))));
                            arr_15 [i_0] [i_1] [i_0] [i_0 + 1] = ((/* implicit */unsigned char) (short)-2455);
                        }
                    } 
                } 
                arr_16 [i_1] [i_1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_13 [i_1] [i_1 + 1] [i_1 - 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_1] [(unsigned char)14])) | (((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_1 - 1])))))))) : (((/* implicit */int) (short)2454))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 3) 
    {
        for (long long int i_7 = 3; i_7 < 22; i_7 += 3) 
        {
            for (signed char i_8 = 0; i_8 < 23; i_8 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 23; i_9 += 1) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 23; i_10 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_6] [16LL]))))) < (((0) | (((/* implicit */int) (signed char)8)))))))));
                                var_24 = ((/* implicit */unsigned short) ((var_12) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_30 [i_9] [(unsigned short)19] [i_7] [i_7 - 3] [i_7 - 3]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_11 = 1; i_11 < 20; i_11 += 3) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 23; i_12 += 4) 
                        {
                            {
                                var_25 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) + (min((arr_30 [i_6] [i_7] [i_12] [i_11 + 2] [(_Bool)1]), (((/* implicit */int) arr_32 [i_6] [(_Bool)1] [i_12] [i_6] [6]))))))) ? (arr_25 [i_6] [i_12]) : (min((((arr_23 [i_6]) + (((/* implicit */unsigned long long int) arr_30 [i_6] [(unsigned short)10] [i_12] [(unsigned char)16] [i_6])))), (((/* implicit */unsigned long long int) var_9))))));
                                var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [(short)20] [i_11 + 2] [i_7 - 3])) ? (((/* implicit */int) arr_33 [i_6] [i_11 + 2] [i_7 - 3] [i_6])) : (((/* implicit */int) (signed char)10)))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_29 [i_7 + 1] [i_7 - 2] [i_7 - 3] [i_7 + 1] [i_6])) < (((/* implicit */int) arr_29 [i_7 + 1] [i_7 - 2] [i_7 + 1] [i_7 + 1] [i_6])))) ? (((((/* implicit */_Bool) max(((unsigned short)37916), ((unsigned short)9753)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_6] [i_7] [i_7] [i_6] [i_7]))))) : (-1307700096))) : (((/* implicit */int) (short)2454))));
                }
            } 
        } 
    } 
}
