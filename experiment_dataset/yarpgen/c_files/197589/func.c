/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197589
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
    var_20 &= ((/* implicit */short) ((((15490007367967827335ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)48), (((/* implicit */unsigned short) (short)(-32767 - 1))))))))) ? (min(((-(2956736705741724281ULL))), ((+(2956736705741724281ULL))))) : (((/* implicit */unsigned long long int) var_18))));
    var_21 = ((/* implicit */int) max((var_21), (((((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_17))))));
    var_22 = ((/* implicit */_Bool) (+(var_11)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) (~(((/* implicit */int) ((short) ((((/* implicit */_Bool) 1048572ULL)) ? (((/* implicit */unsigned long long int) -5846531433961939433LL)) : (18446744073708503023ULL)))))));
                            arr_8 [i_0] [i_0] [(signed char)2] [i_3] = ((/* implicit */short) 15490007367967827334ULL);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) 15490007367967827334ULL))))), ((+(5846531433961939432LL)))));
                            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((unsigned char) -7848460113041459635LL)))));
                            var_26 += ((/* implicit */int) (!(((_Bool) ((((/* implicit */_Bool) (short)-7456)) ? (((/* implicit */int) (unsigned char)67)) : (((/* implicit */int) (signed char)-85)))))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_1] = (+((-(2956736705741724282ULL))));
            }
        } 
    } 
    var_27 &= ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2956736705741724281ULL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (short)21561))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)3300)) && (((/* implicit */_Bool) (short)3300)))))) : ((~(2956736705741724258ULL))))));
}
