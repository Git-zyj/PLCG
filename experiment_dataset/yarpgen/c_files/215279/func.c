/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215279
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
    var_18 = (!(((/* implicit */_Bool) ((((/* implicit */long long int) 323660590)) | (((((-2047555937729229785LL) + (9223372036854775807LL))) << (((var_6) - (3029803523U)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_1 [i_1]), (arr_1 [i_0 + 2])))) || (((/* implicit */_Bool) (+(((arr_1 [i_0]) & (((/* implicit */int) arr_5 [i_0] [(_Bool)1] [(_Bool)1])))))))));
                            var_20 ^= ((/* implicit */int) (unsigned short)38489);
                            arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) max((max((((/* implicit */long long int) (+(var_14)))), (min((((/* implicit */long long int) arr_2 [i_0])), (arr_8 [i_2] [i_2] [i_2] [i_2] [i_2]))))), (((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0] [i_1]))));
                            var_21 = min((576460717943685120LL), (-576460717943685120LL));
                        }
                    } 
                } 
                arr_11 [i_0] [i_1] [i_1] = ((/* implicit */short) min((var_8), (576460717943685111LL)));
                var_22 = 9223372036854775804LL;
                var_23 ^= ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)-20))) / (-576460717943685143LL))) / (((((/* implicit */_Bool) -576460717943685120LL)) ? (-576460717943685121LL) : (((/* implicit */long long int) arr_1 [i_0 + 3]))))));
            }
        } 
    } 
    var_24 ^= ((/* implicit */int) ((((/* implicit */long long int) min((((/* implicit */int) min((var_5), (((/* implicit */short) var_7))))), ((((_Bool)0) ? (var_14) : (((/* implicit */int) var_7))))))) > (((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)113)))) ? (-4190605881508422299LL) : (((/* implicit */long long int) ((/* implicit */int) ((15400772240445081378ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24)))))))))));
}
