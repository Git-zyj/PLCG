/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235108
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_15 &= 17206226573457928415ULL;
                arr_4 [i_0] &= 6965296301075949963ULL;
                arr_5 [i_0] [0ULL] &= (-(min((7131976804520562424ULL), (arr_2 [i_0] [i_0] [i_0]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) ((5417360024672044851ULL) > ((~(((unsigned long long int) 7937950517543546730ULL))))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        {
                            arr_17 [3ULL] [3ULL] [i_4] [i_4] [12ULL] [i_2] = max((((((/* implicit */_Bool) 11783878094749610850ULL)) ? (16673235928622954099ULL) : (min((15737769896169565960ULL), (14747694007584676722ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((5417360024672044862ULL), (7174805226045816551ULL))))))));
                            arr_18 [i_4] [i_3] [i_3] [i_5] [i_4] = (-(arr_10 [i_3] [i_2] [i_4]));
                        }
                    } 
                } 
                var_17 = 17719716308034433932ULL;
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        {
                            arr_25 [i_7] = ((((/* implicit */_Bool) (~(arr_9 [i_6 - 1])))) ? (((arr_15 [i_2] [9ULL] [i_6 + 1] [i_7] [i_3]) + (arr_9 [i_6 - 1]))) : (min((268510950331372944ULL), (1773508145086597516ULL))));
                            var_18 = 12652725690722865365ULL;
                            var_19 += ((((/* implicit */_Bool) ((unsigned long long int) arr_24 [i_3] [i_3] [i_3] [i_2]))) ? (((((/* implicit */_Bool) 13445595827124531177ULL)) ? (18446744073709551615ULL) : (((8044886000315162714ULL) + (arr_14 [i_2] [i_2] [i_7]))))) : (((unsigned long long int) (!(((/* implicit */_Bool) 14861713032798573482ULL))))));
                            var_20 = ((((/* implicit */_Bool) min((4145812226924775229ULL), (6662865978959940755ULL)))) ? (max((((((/* implicit */_Bool) arr_24 [i_3] [i_3] [i_3] [i_2])) ? (arr_19 [i_2] [i_3] [i_7]) : (2838532063130125859ULL))), (((unsigned long long int) 32767ULL)))) : (6662865978959940780ULL));
                        }
                    } 
                } 
                arr_26 [i_2] = 13931424783827802826ULL;
            }
        } 
    } 
}
