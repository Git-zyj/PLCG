/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50214
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
    var_17 |= ((/* implicit */long long int) var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned short) (signed char)-121)), ((unsigned short)19))), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)35784)) != (((/* implicit */int) var_14)))))));
                            arr_9 [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1999008562)) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)124)) * (((((/* implicit */int) (unsigned char)238)) - (((/* implicit */int) (signed char)10)))))))));
                            arr_10 [i_2] = ((/* implicit */unsigned long long int) min(((short)1931), (((/* implicit */short) (signed char)10))));
                            var_19 = ((/* implicit */unsigned short) ((max((9223372032559808512ULL), (var_16))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                        }
                    } 
                } 
                var_20 *= ((/* implicit */short) min((max((((/* implicit */unsigned long long int) var_12)), (14108456837079244576ULL))), (((/* implicit */unsigned long long int) max(((short)-13110), ((short)25990))))));
                var_21 = ((/* implicit */signed char) min((max((3LL), (((/* implicit */long long int) 624959999U)))), (((/* implicit */long long int) var_6))));
                arr_11 [i_0] [i_0] = ((/* implicit */unsigned short) 9223372041149743104ULL);
                var_22 = ((/* implicit */short) min((((var_9) - (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_1)), ((short)-25960))))))), (((9223372032559808512ULL) & (((/* implicit */unsigned long long int) 4294967295U))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_4 = 2; i_4 < 14; i_4 += 2) 
    {
        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            for (long long int i_6 = 0; i_6 < 15; i_6 += 3) 
            {
                {
                    var_23 &= ((/* implicit */long long int) max((min((9223372041149743086ULL), (((/* implicit */unsigned long long int) (short)(-32767 - 1))))), (((/* implicit */unsigned long long int) var_11))));
                    var_24 -= ((/* implicit */unsigned short) min((((/* implicit */long long int) (short)-32744)), (((36028796750528512LL) / (9223372036854775797LL)))));
                }
            } 
        } 
    } 
    var_25 &= ((/* implicit */unsigned char) 1999008544);
}
