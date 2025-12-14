/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41943
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
    for (long long int i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 2; i_2 < 11; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-1)))))));
                                var_18 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10600073782235935955ULL)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (_Bool)1))))) ^ (((32767ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2907)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 11; i_5 += 4) 
                {
                    for (short i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) var_9);
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) (signed char)-73)))))) ? ((-(((/* implicit */int) (unsigned short)57398)))) : (((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)7887))))) != (((((/* implicit */_Bool) arr_16 [(_Bool)1] [i_0] [i_1] [i_5] [i_1] [i_6])) ? (var_12) : (var_12))))))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-6)) + (2147483647))) << (((((-764498366175306151LL) + (764498366175306159LL))) - (8LL)))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)57649)) & (((/* implicit */int) arr_8 [i_5 - 1] [i_5] [i_5] [i_5 + 1]))))) : (max((((/* implicit */long long int) (short)17455)), (-637130323990657872LL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) (unsigned short)51431))))), (var_6)))));
}
