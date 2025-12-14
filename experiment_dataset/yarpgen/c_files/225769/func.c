/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225769
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
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [(_Bool)1] [7ULL] [i_1] = ((/* implicit */long long int) 17627044864956850313ULL);
                var_15 += ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_11))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) /* same iter space */
                {
                    var_16 |= min(((+(((((/* implicit */_Bool) (unsigned char)92)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_10)))))), (((/* implicit */int) min((((signed char) arr_2 [i_0] [(_Bool)1] [i_0])), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_2] [8U])) == (8634069783889157886ULL))))))));
                    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_9)))), (arr_0 [i_0])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_5 [i_0 + 2] [i_0 + 2] [i_0 + 2] [(short)9]) : (((/* implicit */int) var_10))))) ? (min((var_12), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)27001)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(short)0] [i_1] [i_2]))))))));
                }
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
                {
                    var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-103))) : (var_1)))) ? (min((((/* implicit */unsigned long long int) var_6)), (17627044864956850313ULL))) : (((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7)))))))) ? (((/* implicit */unsigned int) arr_9 [(unsigned char)6] [(unsigned char)6] [i_3])) : (max((var_2), (((/* implicit */unsigned int) var_7))))));
                    arr_11 [i_3] [i_1] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_3)))) <= ((-(arr_8 [i_0 - 1] [(_Bool)1] [i_1] [9LL])))));
                    arr_12 [i_1] [i_1] = ((/* implicit */unsigned short) min((var_3), (((/* implicit */unsigned long long int) arr_0 [i_3]))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
    {
        for (int i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 3; i_6 < 9; i_6 += 4) 
            {
                {
                    arr_19 [i_4] [i_4] [1] = ((/* implicit */unsigned long long int) (short)-32761);
                    var_19 = ((/* implicit */int) var_12);
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 1; i_7 < 10; i_7 += 4) 
                    {
                        for (unsigned long long int i_8 = 1; i_8 < 10; i_8 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) arr_21 [i_4] [i_4] [i_4] [i_4] [i_4]);
                                var_21 = (unsigned short)40671;
                            }
                        } 
                    } 
                    var_22 += ((/* implicit */unsigned long long int) min((-1259595390), (((/* implicit */int) var_13))));
                }
            } 
        } 
    } 
    var_23 |= ((/* implicit */unsigned int) (~(((/* implicit */int) var_7))));
}
