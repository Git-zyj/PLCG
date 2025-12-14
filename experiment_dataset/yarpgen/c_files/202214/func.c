/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202214
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
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-1074048438471063686LL))) : ((~(1074048438471063692LL))))), (max((((/* implicit */long long int) max((-1), (((/* implicit */int) (_Bool)0))))), (-4163782677457838102LL))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_17 *= ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) 4294967274U)), (6748719767345681277ULL))), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (max((((/* implicit */unsigned long long int) min((-1074048438471063693LL), (((/* implicit */long long int) ((unsigned int) 5678008625528475487ULL)))))), (max((10621006283516414253ULL), (((/* implicit */unsigned long long int) 16U))))))));
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (int i_4 = 2; i_4 < 11; i_4 += 1) 
                {
                    {
                        arr_10 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1661330922901104411ULL)) && (((/* implicit */_Bool) 8950202514477491108LL))));
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) 143557131820763782LL)) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 2U)), (-1074048438471063693LL)))) : (max((((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)58691)), (1)))), (12768735448181076143ULL)))));
                        var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (549290569156824490LL)))), (min((((/* implicit */unsigned long long int) 16U)), (max((((/* implicit */unsigned long long int) -143557131820763782LL)), (4347456887134421150ULL)))))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */signed char) max((((9223372036854775790LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-6))))), (((((/* implicit */_Bool) (short)-19081)) ? (arr_2 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            arr_13 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 7825737790193137362ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-26466))))) < (((((/* implicit */_Bool) (-(13934956749818942383ULL)))) ? (8696134652440806489LL) : (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_1])))))))));
            arr_14 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (var_14)))) % ((+(((/* implicit */int) arr_1 [i_1]))))));
            var_22 -= max((((/* implicit */unsigned long long int) arr_9 [i_5] [i_5] [i_5] [3LL] [i_1] [i_1])), (((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)138))))) | (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
            arr_15 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_5);
        }
        var_23 = 1074048438471063692LL;
    }
}
