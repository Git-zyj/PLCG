/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41226
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
    var_15 = (short)(-32767 - 1);
    var_16 &= ((/* implicit */int) ((((/* implicit */_Bool) (short)32753)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32753))) : (765533788U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_8)))) : (((765533788U) >> (((var_12) - (2758673388214801519LL))))))) : (((/* implicit */unsigned int) ((int) var_9)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_0] [(unsigned short)7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) -1409982555)) < (5823373212939607930ULL))) ? (17432672875622073968ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_14)))))))));
                            var_17 = ((/* implicit */unsigned short) ((((var_11) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32753))))) ? (max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (1398217048))), (((/* implicit */int) ((523776) <= (((/* implicit */int) var_1))))))) : (max((((((/* implicit */int) var_2)) * (((/* implicit */int) (unsigned short)7991)))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-43)) : (((/* implicit */int) (unsigned short)2048))))))));
                            var_18 -= ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) (~(1398217048))))))), ((~(((var_13) >> (((((/* implicit */int) (unsigned short)16236)) - (16205)))))))));
                            arr_11 [i_0] [i_0] [i_0] [i_2] [i_2 - 2] [(unsigned short)2] = ((/* implicit */short) (((!(((/* implicit */_Bool) min((((/* implicit */int) var_0)), (var_6)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (12U)));
                        }
                    } 
                } 
                var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (unsigned short)16793)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16791))) : (var_4))))) % (((var_4) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 2; i_4 < 19; i_4 += 3) 
                {
                    for (int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (short)(-32767 - 1))), (2341043299U)));
                            var_21 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (+(var_6)))) ? ((~(((/* implicit */int) var_10)))) : ((+(-1870066795))))), (((/* implicit */int) ((short) var_8)))));
                            var_22 = ((/* implicit */short) var_4);
                        }
                    } 
                } 
            }
        } 
    } 
}
