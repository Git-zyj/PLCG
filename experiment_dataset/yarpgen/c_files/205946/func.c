/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205946
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
    var_10 = ((/* implicit */short) ((_Bool) max((((/* implicit */long long int) (unsigned char)251)), (((long long int) (unsigned short)8616)))));
    var_11 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (unsigned short)41827)), (max((((/* implicit */unsigned long long int) (~(2147483647)))), (max((var_9), (var_5)))))));
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (13162654426377810501ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4294967295U)))))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) var_0);
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
        {
            arr_7 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (-2147483647 - 1))), (var_0)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)245)) ? (25U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))) : (min((((/* implicit */long long int) (_Bool)1)), (5206317070327947924LL)))))) && ((_Bool)1)));
            arr_8 [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)56913)), (2367990965332356280ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_8)), ((unsigned short)8616))))) : (((((/* implicit */_Bool) var_2)) ? (var_0) : (-4447635756286858646LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (-(var_9)))))))));
            /* LoopNest 3 */
            for (long long int i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    for (short i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) max((((((((/* implicit */_Bool) (unsigned short)26365)) || (((/* implicit */_Bool) 16078753108377195336ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)74))) : ((+(2367990965332356286ULL))))), (((/* implicit */unsigned long long int) (+(1868862202U))))));
                            arr_20 [i_3] [i_3] [i_3] [i_3] [2ULL] = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (_Bool)1)), (min(((unsigned short)27967), ((unsigned short)26365)))));
                            var_14 += ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 5126203477421861978LL)))))));
                            var_15 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) max((var_0), (((/* implicit */long long int) (unsigned char)250))))), (3416504520925852356ULL))), (((/* implicit */unsigned long long int) min((max(((unsigned short)56920), (((/* implicit */unsigned short) (unsigned char)126)))), ((unsigned short)8592))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_6 = 0; i_6 < 25; i_6 += 4) 
            {
                for (unsigned short i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    for (short i_8 = 0; i_8 < 25; i_8 += 2) 
                    {
                        {
                            var_16 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(7872249924427217874LL))))));
                            arr_30 [i_0] [i_5] [i_6] [i_7] [5U] [i_8] = ((/* implicit */unsigned char) (signed char)110);
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 939524096U)) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) (unsigned short)56920))))) ? (((((/* implicit */_Bool) var_3)) ? (3569871704U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
        }
        var_18 = (-(max((((/* implicit */unsigned long long int) (unsigned short)56360)), (6878905715498672721ULL))));
        arr_31 [i_0] &= ((/* implicit */unsigned long long int) ((long long int) ((((((/* implicit */_Bool) (unsigned short)9176)) ? (5126203477421861978LL) : (5126203477421861976LL))) != (((/* implicit */long long int) min((4294967274U), (((/* implicit */unsigned int) (unsigned short)36647))))))));
        arr_32 [i_0] [i_0] = ((/* implicit */int) max((((long long int) (~((-9223372036854775807LL - 1LL))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)250)))) ? (max((((/* implicit */long long int) (_Bool)1)), (9223372036854775807LL))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)992)) >> (((((/* implicit */int) (unsigned short)8613)) - (8602))))))))));
    }
}
