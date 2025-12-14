/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244783
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
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 += ((/* implicit */long long int) max((((/* implicit */int) arr_5 [(unsigned short)0])), ((+(max((1650326190), (((/* implicit */int) (_Bool)1))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) min((((long long int) ((((/* implicit */int) var_11)) * (((/* implicit */int) (unsigned char)29))))), (((((/* implicit */_Bool) (~(var_5)))) ? (min((((/* implicit */long long int) arr_5 [i_0])), (-395026850943096956LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33245)))))));
                            var_17 = ((/* implicit */signed char) ((unsigned short) var_7));
                            var_18 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) var_6))) >= (((/* implicit */int) (unsigned char)232))));
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 2]))) ^ (456427930124937814LL)))) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((((/* implicit */int) (unsigned char)29)) + (((/* implicit */int) (unsigned short)5))))));
                            var_20 = ((/* implicit */short) ((((/* implicit */int) ((_Bool) 4846465482438295152LL))) >= (((((/* implicit */_Bool) 456427930124937811LL)) ? (arr_10 [i_0] [i_0 - 1] [16ULL] [i_0 + 2] [i_0 + 1] [i_3]) : (((/* implicit */int) var_11))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) (unsigned short)6231);
            }
        } 
    } 
    var_22 -= ((/* implicit */signed char) max((min((min((2693867570338357569ULL), (((/* implicit */unsigned long long int) (unsigned char)37)))), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12))))) ? (((long long int) (unsigned char)227)) : ((~(6740607301108017375LL))))))));
    /* LoopNest 2 */
    for (unsigned short i_4 = 1; i_4 < 17; i_4 += 4) 
    {
        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            {
                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_8))));
                var_24 = ((/* implicit */unsigned long long int) var_3);
                var_25 &= ((/* implicit */unsigned int) var_2);
                var_26 = (~(((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) var_14))))) >= (min((-456427930124937825LL), (((/* implicit */long long int) var_11))))))));
            }
        } 
    } 
}
