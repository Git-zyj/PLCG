/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242349
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
    var_13 = ((/* implicit */int) var_10);
    var_14 = ((/* implicit */unsigned int) var_8);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) var_4);
        arr_3 [i_0] = min((((long long int) -716099751762099282LL)), (((/* implicit */long long int) max((((/* implicit */int) ((unsigned char) var_1))), (var_5)))));
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 2; i_1 < 23; i_1 += 2) 
    {
        for (unsigned char i_2 = 1; i_2 < 23; i_2 += 2) 
        {
            {
                arr_11 [i_1 - 2] [i_2 + 1] = var_4;
                arr_12 [i_2 + 1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 6855893504622957074ULL)) ? (((/* implicit */int) (short)24929)) : (((/* implicit */int) (short)-24942))))) ? (((/* implicit */int) max((arr_4 [i_1]), (var_7)))) : (((((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_2])) ? (((/* implicit */int) (short)28857)) : (((/* implicit */int) (unsigned char)245)))))) <= ((-(((/* implicit */int) (short)-4597))))));
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    for (unsigned short i_4 = 2; i_4 < 21; i_4 += 2) 
                    {
                        {
                            arr_20 [(unsigned short)17] [(unsigned short)17] [i_3] [i_4] = ((/* implicit */unsigned int) var_6);
                            arr_21 [i_4] [i_4 - 2] [i_3] [(unsigned char)22] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-28873)) ? (9169954422838516523LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) -7205727334772951077LL)) ? (((arr_5 [i_3]) ? (((/* implicit */int) arr_9 [(signed char)15] [i_2] [i_1 - 1])) : (((/* implicit */int) arr_16 [i_1 - 2] [i_1 - 1] [i_1 - 1])))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))))))));
                            arr_22 [i_4 - 1] [(_Bool)1] [i_2 + 1] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-16)), ((unsigned char)33))))));
                            var_15 = ((/* implicit */unsigned long long int) arr_17 [i_1] [i_1] [i_3] [i_2] [i_3] [i_1 + 1]);
                        }
                    } 
                } 
                arr_23 [(unsigned char)21] = ((/* implicit */long long int) (unsigned char)64);
            }
        } 
    } 
}
