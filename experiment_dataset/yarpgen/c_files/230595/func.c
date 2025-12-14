/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230595
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
    var_10 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) var_1)), ((unsigned char)23)))) <= (((/* implicit */int) (unsigned char)27))))), (min((((/* implicit */long long int) var_2)), (min((((/* implicit */long long int) (signed char)82)), (2189371160979902859LL)))))));
    var_11 = ((/* implicit */short) (-(((/* implicit */int) var_1))));
    var_12 = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_1)), (var_4)));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_13 = min((((/* implicit */unsigned int) ((557859421) == (((/* implicit */int) (signed char)-69))))), (min((((/* implicit */unsigned int) var_5)), (max((3346996423U), (((/* implicit */unsigned int) (short)0)))))));
        arr_2 [i_0 + 2] [(signed char)14] = max((((/* implicit */int) (short)14234)), (arr_1 [i_0]));
        arr_3 [(unsigned char)8] [i_0 - 1] = min(((~(min((((/* implicit */unsigned long long int) (unsigned short)16376)), (3092332897516639574ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 - 1])) > (((/* implicit */int) arr_0 [i_0 - 1]))))));
        var_14 ^= ((/* implicit */long long int) min((var_6), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) 1920)) / (-2215873614127536709LL)))) || (((-8896221357979216867LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
    }
    for (unsigned char i_1 = 1; i_1 < 19; i_1 += 3) /* same iter space */
    {
        var_15 ^= ((/* implicit */short) min((arr_7 [i_1 + 2]), (((arr_7 [i_1 - 1]) | (arr_7 [i_1 + 2])))));
        var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((var_3) + (9223372036854775807LL))) >> (((min((((/* implicit */int) (unsigned char)77)), (-1730482166))) + (1730482177))))))));
    }
    for (unsigned char i_2 = 1; i_2 < 19; i_2 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */short) (~(min((34357641216LL), (((/* implicit */long long int) (_Bool)1))))));
        arr_10 [i_2] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((-5155877998660469081LL) + (5155877998660469100LL)))))) || (((/* implicit */_Bool) arr_1 [i_2]))))));
    }
}
