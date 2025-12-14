/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219534
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
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_8)))) - (((long long int) var_0))));
                var_21 = max((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_1 [(signed char)13]) : (((/* implicit */long long int) ((/* implicit */int) var_18))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)102))) > (arr_1 [(_Bool)1]))))))));
                var_22 -= ((/* implicit */unsigned short) ((int) ((long long int) max(((unsigned char)8), (((/* implicit */unsigned char) (_Bool)0))))));
                var_23 = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_6)) ? (1772899909) : (((/* implicit */int) var_18))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (+(((/* implicit */int) (unsigned char)153))))))) : (((unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned char)102)) : (((/* implicit */int) var_19))))));
            }
        } 
    } 
    var_24 = ((((/* implicit */_Bool) ((16385821517708124476ULL) * (((/* implicit */unsigned long long int) 1772899909))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : (((/* implicit */int) ((1583223973) > (-2125639462)))));
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_17 [(_Bool)1] [14] [(short)6] [14] = (_Bool)1;
                            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(max((var_15), (((/* implicit */unsigned int) var_13))))))) ? (((/* implicit */unsigned long long int) arr_11 [18])) : (var_1)));
                            arr_18 [(signed char)19] [(short)5] [21U] [(signed char)16] [(short)17] = ((/* implicit */unsigned char) max((-1772899910), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -3487575058595548941LL)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_16 [i_5 - 1] [(_Bool)1] [(_Bool)1] [i_5 - 1] [2ULL]))))));
                            arr_19 [(short)17] [4LL] = ((/* implicit */unsigned long long int) max((((int) arr_6 [(unsigned char)14])), ((+(((/* implicit */int) var_3))))));
                        }
                    } 
                } 
                arr_20 [(_Bool)1] = (((_Bool)1) || (((/* implicit */_Bool) 8010482884325177377ULL)));
                arr_21 [(_Bool)0] = ((/* implicit */_Bool) (-(-1772899910)));
            }
        } 
    } 
}
