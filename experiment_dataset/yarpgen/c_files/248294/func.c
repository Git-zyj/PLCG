/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248294
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 2) /* same iter space */
                    {
                        arr_11 [i_0] [i_0] [(_Bool)1] = ((/* implicit */long long int) arr_2 [i_0]);
                        var_10 = ((/* implicit */_Bool) (~(var_9)));
                        var_11 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((long long int) (unsigned char)31))) ? (((-1574284014) | (1574284005))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1574284005)))))))));
                    }
                    for (int i_4 = 0; i_4 < 15; i_4 += 2) /* same iter space */
                    {
                        var_12 = ((/* implicit */_Bool) -618909008);
                        var_13 = ((/* implicit */unsigned char) (_Bool)1);
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((((/* implicit */long long int) arr_6 [i_2] [i_2] [i_0])) != (144115188075855872LL))) ? (((/* implicit */long long int) min((((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_4])), (arr_2 [i_0])))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1 - 1] [i_0])) ? (747900551720757418LL) : (((/* implicit */long long int) arr_2 [i_0])))));
                        var_14 -= ((((min((747900551720757418LL), (((/* implicit */long long int) 357790793)))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 144115188075855872LL)))))))) ? (((((/* implicit */_Bool) ((var_7) ^ (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (unsigned char)255)) ^ (-1704071508))) : (((((/* implicit */_Bool) -1652722773)) ? (1885380947) : (var_8))))) : (max((((((/* implicit */_Bool) 134217696)) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_7 [i_1] [i_1])))), ((~(arr_12 [i_1] [i_4] [i_4] [i_4]))))));
                    }
                    var_15 = (((!(var_5))) ? (((/* implicit */int) min((((3114283736152337658LL) < (((/* implicit */long long int) -1574284006)))), ((_Bool)1)))) : (((((((/* implicit */int) arr_4 [i_0])) < (1))) ? (((/* implicit */int) ((var_5) && (((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) 994531329)) ? (var_9) : (((/* implicit */int) (unsigned char)253)))))));
                }
            } 
        } 
    } 
    var_16 |= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) != (-1574284014)));
}
