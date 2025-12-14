/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192186
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) (unsigned char)46)) ? (((/* implicit */int) (unsigned char)47)) : (((/* implicit */int) (short)3592)))));
                var_12 = ((/* implicit */_Bool) (short)19735);
                var_13 = ((/* implicit */unsigned short) (~((~(((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) (unsigned char)171)) : (((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        for (short i_3 = 4; i_3 < 19; i_3 += 2) 
        {
            {
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)221)), (var_8)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3 - 2] [i_3 - 4])) ? (arr_10 [i_3 - 2] [i_3 - 2]) : (((/* implicit */long long int) 1793795606U)))))));
                var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) (_Bool)1)))));
                arr_12 [i_2] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (min((((/* implicit */long long int) arr_4 [(short)10] [i_3 + 2])), (var_4))))) + (((/* implicit */long long int) (((((_Bool)1) ? (842765989U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)208))))) % (4221493753U))))));
            }
        } 
    } 
}
