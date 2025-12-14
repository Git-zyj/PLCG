/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29747
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
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        var_10 = arr_1 [i_0];
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((long long int) (-9223372036854775807LL - 1LL))) + (((((/* implicit */_Bool) arr_0 [i_0 - 2] [8LL])) ? (arr_0 [i_0 - 1] [i_0 + 1]) : (var_9)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_8) : (((arr_0 [i_0 + 2] [i_0]) + (128849018880LL))))))));
        var_11 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7151865461984523915LL)) ? (3628919065574260995LL) : (-1461520093520154128LL)))) ? (max((((((/* implicit */_Bool) var_9)) ? (-7151865461984523900LL) : ((-9223372036854775807LL - 1LL)))), (arr_1 [i_0 + 2]))) : (((long long int) 126100789566373888LL)));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            arr_5 [i_0 - 2] [i_0 - 2] &= max((((long long int) 1205829710871496715LL)), (((((long long int) 7151865461984523900LL)) + (((((/* implicit */_Bool) var_9)) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))))));
            var_12 |= var_9;
            /* LoopSeq 4 */
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                arr_8 [10LL] [i_2] [i_2] = max((max((((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (var_7) : (arr_0 [i_0] [i_0 - 2]))), (max((-7123492070986507442LL), (-7151865461984523915LL))))), (min((6429500230545135027LL), (3808977446111421541LL))));
                var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) -3646655593856120198LL))) || (((/* implicit */_Bool) max((3808977446111421541LL), (((long long int) -5266812340624450296LL)))))));
                var_14 = max((-4161955291809972402LL), (max((288230376151711743LL), (arr_6 [i_0 - 1] [i_0 + 2] [i_0 + 1]))));
            }
            for (long long int i_3 = 0; i_3 < 11; i_3 += 2) /* same iter space */
            {
                var_15 = ((long long int) 126100789566373903LL);
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    arr_14 [i_0] [i_1] [i_0] [i_4] [i_3] [i_1] = ((((/* implicit */_Bool) -3506552080470173831LL)) ? (126100789566373913LL) : (-6429500230545135028LL));
                    var_16 = ((/* implicit */long long int) max((var_16), (((long long int) 5298030195352394303LL))));
                }
            }
            /* vectorizable */
            for (long long int i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
            {
                var_17 = ((long long int) ((((/* implicit */_Bool) 7151865461984523900LL)) ? (5807724684365175529LL) : (8070450532247928832LL)));
                var_18 = ((long long int) arr_1 [i_0]);
                arr_17 [i_0] [i_1] [i_5] |= ((long long int) 8070450532247928837LL);
            }
            for (long long int i_6 = 0; i_6 < 11; i_6 += 2) /* same iter space */
            {
                var_19 = ((/* implicit */long long int) max((var_19), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) 7151865461984523925LL)))))), (((long long int) ((long long int) var_3)))))));
                arr_20 [i_6] [i_1] [i_0] [i_0] = min((((((/* implicit */_Bool) var_3)) ? (arr_4 [i_0 + 1] [i_0 + 2] [i_0 - 2]) : (arr_4 [i_0 + 1] [i_0 - 1] [i_0 + 2]))), (max((3292377933977391120LL), (8795019280384LL))));
                var_20 = min((((/* implicit */long long int) ((arr_19 [i_0] [i_1] [i_6] [10LL]) >= (min((-4737855300942076400LL), (2889447662820647511LL)))))), (((long long int) -4737855300942076379LL)));
            }
        }
        var_21 &= max((((long long int) ((long long int) arr_7 [i_0 - 1]))), (((arr_15 [i_0 - 1] [i_0 + 2] [i_0 + 1]) + (-4700069338132915241LL))));
    }
    var_22 += ((long long int) ((long long int) 8070450532247928833LL));
    var_23 = ((/* implicit */long long int) min((var_23), (var_4)));
}
