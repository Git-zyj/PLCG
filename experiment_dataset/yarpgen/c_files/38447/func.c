/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38447
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
    for (short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_10)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)170))))) : (((/* implicit */int) (short)-14909))))), (((((/* implicit */unsigned long long int) var_7)) / (min((var_13), (((/* implicit */unsigned long long int) (short)25804))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_3] [4LL] [i_2] [i_3] [i_3] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)169)), (var_6)))))))) + (((unsigned long long int) var_11)));
                            var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_0 [i_0 - 1] [i_1]) : (arr_0 [i_0 - 1] [i_1]))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */long long int) ((((min((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-109))))), ((-(((/* implicit */int) arr_7 [i_0] [i_1] [8LL])))))) + (2147483647))) >> (((var_2) - (9217097890280687733ULL)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            for (unsigned int i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                {
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_6])) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (short)10963))))) ? (arr_17 [i_4] [i_4] [i_6] [6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-10964)) && (((/* implicit */_Bool) var_5)))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_6]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_13) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)86))))))) : (var_3)))));
                    var_23 = ((/* implicit */unsigned int) ((signed char) (~(((/* implicit */int) arr_13 [i_6])))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned char) max(((short)-25804), ((short)14895)));
                        var_25 = ((/* implicit */long long int) arr_13 [i_6]);
                    }
                    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_13 [i_4])) + (2147483647))) >> (((1366920063U) - (1366920033U)))))) || (((/* implicit */_Bool) (+(((((/* implicit */_Bool) 255820722)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_16 [i_4])))))))));
                        var_27 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_6 [i_4]))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)146))) : (min((var_14), (((/* implicit */long long int) arr_9 [i_5] [9] [i_5] [i_5] [1LL] [i_5]))))));
                    }
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned long long int) ((long long int) (~((~(var_17))))));
}
