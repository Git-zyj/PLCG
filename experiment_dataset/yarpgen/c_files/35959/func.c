/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35959
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2135357528122595821LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (arr_0 [i_0])))) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) (unsigned char)0)));
        arr_4 [i_0] = ((/* implicit */long long int) (signed char)-19);
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)18538)) : (((/* implicit */int) arr_1 [i_0]))));
        arr_5 [i_0] = ((/* implicit */int) (+(arr_0 [i_0])));
        arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (-2254532471714229742LL)));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)72))));
            arr_11 [i_1] [i_1] = ((/* implicit */unsigned char) (+(-860331389)));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                for (long long int i_4 = 1; i_4 < 14; i_4 += 3) 
                {
                    {
                        var_15 *= ((/* implicit */long long int) (unsigned char)0);
                        arr_16 [i_3] [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) (signed char)-19)) ? (((/* implicit */int) (unsigned short)7485)) : (((/* implicit */int) (signed char)127)));
                        var_16 = ((((/* implicit */int) (short)-15617)) < (((/* implicit */int) (unsigned short)55304)));
                        var_17 -= ((/* implicit */unsigned char) arr_10 [i_2] [9]);
                    }
                } 
            } 
        }
        arr_17 [i_1] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1]))));
    }
    var_18 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (-25) : (((/* implicit */int) (unsigned short)7492))))))) || (((/* implicit */_Bool) (unsigned char)248))));
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (signed char)-16))));
}
