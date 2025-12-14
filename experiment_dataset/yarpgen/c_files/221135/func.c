/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221135
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(668346882)))) + (6598892514297663759ULL)));
                var_15 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) 11847851559411887883ULL))) ? ((~(6598892514297663737ULL))) : (((((((/* implicit */_Bool) 11847851559411887862ULL)) ? (((/* implicit */unsigned long long int) -6601482239572135528LL)) : (11847851559411887856ULL))) ^ (max((((/* implicit */unsigned long long int) var_4)), (6598892514297663744ULL)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 3; i_2 < 8; i_2 += 3) 
    {
        for (unsigned short i_3 = 2; i_3 < 8; i_3 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned short) (-(min(((-(((/* implicit */int) arr_7 [i_3])))), ((-(-383772601)))))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */int) var_3);
                            var_18 = ((/* implicit */signed char) min((((unsigned long long int) ((unsigned char) 6598892514297663744ULL))), (((/* implicit */unsigned long long int) 182337117U))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)58)) : (((/* implicit */int) (unsigned short)10550))));
    var_20 = 11847851559411887899ULL;
}
