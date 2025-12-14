/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242984
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
    var_17 *= ((/* implicit */unsigned short) max((((short) ((signed char) var_3))), (((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_7))))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_18 = ((/* implicit */short) max((min((((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) var_5)))), ((+(var_11))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)17889))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) ((short) 511090359)))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (+(5592832138494097288ULL))))));
            arr_7 [i_1] = ((/* implicit */unsigned short) (unsigned char)179);
        }
        var_20 -= ((/* implicit */short) min(((signed char)99), (((signed char) arr_1 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 24; i_2 += 2) 
        {
            for (unsigned short i_3 = 1; i_3 < 24; i_3 += 4) 
            {
                {
                    var_21 = var_13;
                    var_22 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_0)))) ? (((arr_6 [i_3 + 1] [6U]) + (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (max((arr_6 [i_0] [i_2 - 1]), (arr_6 [i_0] [i_0])))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned int i_4 = 2; i_4 < 11; i_4 += 3) 
    {
        for (signed char i_5 = 1; i_5 < 9; i_5 += 2) 
        {
            {
                arr_17 [i_4] [7U] [i_5] = ((/* implicit */signed char) max(((-((~(416438164))))), ((~(((/* implicit */int) ((unsigned char) var_6)))))));
                arr_18 [i_4] [i_5] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) (unsigned char)76)) ? (((/* implicit */int) (unsigned char)91)) : (((/* implicit */int) arr_3 [i_5] [i_4 - 2])))) : (((/* implicit */int) ((unsigned short) (unsigned short)19875))))), (((/* implicit */int) arr_3 [i_4 - 1] [i_5 + 2]))));
                var_23 = ((/* implicit */short) ((long long int) (short)4102));
            }
        } 
    } 
}
