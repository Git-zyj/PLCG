/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205753
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
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (!(var_13)))) > (((/* implicit */int) var_11))))) - (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_1]))))))))));
                var_16 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0 - 1]))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1])) << (((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                {
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) var_6))));
                    arr_14 [i_2] [i_3] [i_4] = ((/* implicit */long long int) arr_4 [(_Bool)1] [i_2] [i_2]);
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned short)109))));
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (((short) (_Bool)1)))))));
                    arr_15 [i_4] = -1446631954200938115LL;
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 19; i_5 += 1) 
    {
        for (short i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            {
                var_20 = ((/* implicit */int) max((var_20), ((+((-(((/* implicit */int) var_6))))))));
                arr_23 [i_5] [i_5] [(_Bool)1] = ((/* implicit */unsigned short) ((short) (-(arr_20 [i_5 - 1] [i_6]))));
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    for (signed char i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        {
                            var_21 = (-(((((/* implicit */int) arr_16 [i_5 - 1])) - (((/* implicit */int) var_4)))));
                            arr_30 [i_5] [i_6] [i_7] [i_8] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_18 [i_5 - 1]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)(-127 - 1))))))))) : (((((/* implicit */_Bool) 1805163967221934676LL)) ? ((~(((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) var_6))))))));
                            var_22 += ((/* implicit */long long int) (+(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) -1146690331379139347LL)) ? (((/* implicit */int) (unsigned char)70)) : (((/* implicit */int) (signed char)46))))))));
                            arr_31 [i_5] [i_5] [i_7] [i_8] [i_7] = ((/* implicit */long long int) arr_26 [i_5] [(_Bool)1]);
                        }
                    } 
                } 
            }
        } 
    } 
}
