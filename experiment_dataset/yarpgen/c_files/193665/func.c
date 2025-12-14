/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193665
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
    /* LoopSeq 4 */
    for (long long int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 3] [i_0])) ? (arr_1 [i_0 - 2] [i_0]) : (-1709609128)))) ? (max((1709609127), (arr_1 [i_0 + 2] [i_0]))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_1))))));
        arr_3 [i_0] = ((/* implicit */int) (-(((((/* implicit */_Bool) ((long long int) arr_1 [13LL] [i_0]))) ? (((/* implicit */long long int) var_4)) : (min((((/* implicit */long long int) 800537588)), (var_6)))))));
        var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0])) ? (var_2) : (((/* implicit */long long int) ((arr_1 [i_0] [i_0]) + (1709609127))))))) ? (min((var_0), (((/* implicit */long long int) (-(-774382909)))))) : (max((((((/* implicit */_Bool) var_15)) ? (2553650836035544742LL) : (var_0))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (4611686018418999296LL) : (3529778075289707685LL))))));
    }
    for (int i_1 = 1; i_1 < 11; i_1 += 3) 
    {
        var_17 = ((/* implicit */long long int) (((~(1976262078))) | (var_7)));
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) min((((long long int) arr_5 [i_1])), ((~(arr_4 [i_1] [0LL])))))) ? (((long long int) ((((/* implicit */_Bool) -1476246856)) ? (((/* implicit */long long int) 800537588)) : (3529778075289707685LL)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (-1196052440) : (2027831120))))))))));
    }
    for (int i_2 = 3; i_2 < 14; i_2 += 4) 
    {
        arr_9 [i_2] = ((((/* implicit */_Bool) max((((/* implicit */long long int) 268435448)), ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_14), (((/* implicit */long long int) 800537588))))))))) : (((((/* implicit */_Bool) -1724342348216262209LL)) ? ((+(5693802611970290923LL))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) arr_6 [17])) : ((-9223372036854775807LL - 1LL)))))));
        var_19 = max((((((/* implicit */_Bool) ((long long int) -705003870))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) 1971769098)) : (22LL))) : (((long long int) -1993663674)))), (min((max((-5097094093249794741LL), (((/* implicit */long long int) 0)))), (4737973179825887597LL))));
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((((/* implicit */_Bool) 0LL)) ? (arr_7 [i_2 - 1]) : (var_6))) >= (((((/* implicit */_Bool) arr_6 [i_2 - 1])) ? (((((/* implicit */_Bool) 16777212)) ? (((/* implicit */long long int) 0)) : (var_11))) : (((/* implicit */long long int) arr_6 [i_2 + 3])))))))));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 14; i_3 += 4) 
    {
        var_21 = 5224030080108202182LL;
        var_22 ^= ((((/* implicit */_Bool) 1709609125)) ? (-4527775284970194843LL) : (-7LL));
        var_23 *= ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 0LL))))) <= (-1114173919)));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
    {
        var_24 = ((/* implicit */long long int) max((var_24), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_12)) : (var_6)))));
        arr_14 [10] [15LL] = ((((/* implicit */_Bool) arr_12 [i_4])) ? (16777152LL) : (var_6));
    }
    var_25 = (~(((int) ((5224030080108202202LL) == (1853338738447665362LL)))));
    var_26 |= (+(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 1681295422)) || (((/* implicit */_Bool) 1667879865943108621LL))))) > (var_13)))));
}
