/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249280
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
    var_10 = ((/* implicit */unsigned char) ((unsigned short) (short)8191));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) 18014398509480960LL)) ? (-753501692318714975LL) : (18014398509480954LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1])))))) ? (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_5 [i_0] [i_1] [i_1])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1])))))))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_3 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_1])) * (((/* implicit */int) var_9)))))))));
            var_12 -= (!(((/* implicit */_Bool) (unsigned char)13)));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    {
                        var_13 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) ((unsigned char) 18014398509480960LL))) : (((/* implicit */int) (short)12901)))) != (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((((/* implicit */int) arr_9 [i_1] [i_2] [i_3])) & (((/* implicit */int) arr_9 [i_1] [i_2] [i_3])))) : (((/* implicit */int) var_1))))));
                        var_14 -= ((/* implicit */short) ((unsigned char) (unsigned char)12));
                    }
                } 
            } 
            var_15 = ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 845085514)) ? (18014398509480960LL) : (arr_1 [5LL] [i_1])))) ? (((/* implicit */long long int) ((unsigned int) arr_0 [i_1] [i_0]))) : (max((((/* implicit */long long int) (_Bool)1)), (8068118122638062570LL))))) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) 18014398509480960LL)) ? (((/* implicit */int) (unsigned short)15)) : (((/* implicit */int) (unsigned char)47))))))));
            var_16 = ((/* implicit */long long int) (-(((max((((/* implicit */int) (short)27382)), (0))) % (((/* implicit */int) var_0))))));
        }
        arr_12 [i_0] [i_0] = ((/* implicit */long long int) max((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) != (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) 580258899U)) : (arr_1 [(unsigned char)0] [2ULL]))))))));
    }
    for (long long int i_4 = 1; i_4 < 17; i_4 += 2) 
    {
        var_17 = ((/* implicit */long long int) max((var_17), (min((((((((/* implicit */int) (unsigned short)12332)) >= (((/* implicit */int) (unsigned char)122)))) ? (max((6699125525410837575LL), (((/* implicit */long long int) arr_13 [(short)13])))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4 - 1]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_13 [i_4])))))))));
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)61007))))))))));
    }
}
