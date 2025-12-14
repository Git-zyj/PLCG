/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249968
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2040))) : (min((var_3), (((/* implicit */unsigned int) var_9))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((var_0) == (((var_5) ? (((/* implicit */unsigned long long int) 2909079949U)) : (var_8))))))));
    var_12 = ((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) (~(-126038879)))))));
    var_13 = ((/* implicit */_Bool) var_0);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 4; i_1 < 11; i_1 += 2) 
        {
            for (long long int i_2 = 3; i_2 < 10; i_2 += 2) 
            {
                {
                    var_14 -= ((/* implicit */_Bool) min(((~(((((/* implicit */long long int) ((/* implicit */int) var_1))) ^ (-5842040246422090861LL))))), (((/* implicit */long long int) (~(((((/* implicit */int) var_2)) ^ (arr_4 [(_Bool)1] [i_1]))))))));
                    arr_7 [i_1] = (unsigned short)35998;
                }
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_3 = 2; i_3 < 11; i_3 += 1) 
        {
            var_15 = ((/* implicit */_Bool) arr_0 [i_0]);
            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_0 [i_3 - 1])))))))));
        }
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_14 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) ^ (var_8)));
            var_17 = ((/* implicit */signed char) (+(arr_11 [i_4])));
            arr_15 [(_Bool)0] [(_Bool)0] [i_4] = var_6;
        }
        var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) (unsigned short)55283)) << (((2498494655690723706LL) - (2498494655690723700LL))))) : (((/* implicit */int) (_Bool)1)))))));
    }
}
