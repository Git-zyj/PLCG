/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238389
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
    var_12 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)8212))))) ? ((-(8433675156784218150LL))) : (((/* implicit */long long int) (-(var_6))))))) ? (var_11) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_4)) : (var_0)))) ? (((int) var_3)) : (((/* implicit */int) ((unsigned short) var_3)))))));
    var_13 = ((/* implicit */short) var_2);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            arr_11 [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)57324)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) max((((unsigned char) (_Bool)1)), (((/* implicit */unsigned char) (signed char)3)))))));
                            var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) (-(var_8)))) && (arr_5 [i_1 - 1] [i_1 + 2] [i_1 + 2])))), (min((((var_8) / (var_8))), (((/* implicit */int) var_5)))))))));
                            var_15 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1 + 2])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : ((-(((/* implicit */int) (unsigned short)16192))))))));
                            var_16 = ((/* implicit */unsigned int) (((_Bool)1) ? (14ULL) : (13627117011779135592ULL)));
                        }
                    } 
                } 
                var_17 ^= ((/* implicit */long long int) ((unsigned short) max((min((((/* implicit */unsigned long long int) (unsigned short)57323)), (18446744073709551610ULL))), (((/* implicit */unsigned long long int) arr_1 [i_1 - 1] [i_1])))));
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        {
                            arr_19 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned short)24334)) : (((/* implicit */int) (unsigned char)128)))), (((/* implicit */int) (!(((/* implicit */_Bool) (~(var_2)))))))));
                            var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (unsigned short)0)), (13627117011779135592ULL)));
                        }
                    } 
                } 
            }
        } 
    } 
}
