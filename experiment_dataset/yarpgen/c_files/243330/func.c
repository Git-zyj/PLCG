/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243330
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_18 &= ((unsigned long long int) max((arr_2 [i_2]), (((/* implicit */unsigned long long int) arr_6 [i_1]))));
                    var_19 = (unsigned char)228;
                    arr_8 [i_0] [(_Bool)1] [i_2] [(unsigned char)19] = ((/* implicit */unsigned char) (unsigned short)65535);
                    var_20 = ((/* implicit */unsigned char) arr_4 [i_0]);
                    var_21 = ((/* implicit */unsigned long long int) var_8);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (4398046248960ULL)))));
                    arr_19 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) var_10);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((((var_2) >= (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)70), (var_13))))))) ? (max((((/* implicit */unsigned long long int) 8754752780477649293LL)), (18446739675663302655ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
}
