/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4103
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
    for (int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                arr_4 [(short)5] [i_1] [i_1] = min(((+(max((arr_2 [i_0] [3] [i_1]), (((/* implicit */int) var_7)))))), (((/* implicit */int) arr_0 [i_0] [i_0])));
                var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_1 [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_6)))))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) 2117477182);
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((+(4398246944760019620ULL))), (((/* implicit */unsigned long long int) ((-2117477183) > (((/* implicit */int) var_8)))))))) ? (((int) max((((/* implicit */int) (short)16)), (var_10)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)14888)))))));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 15; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            {
                arr_12 [i_3] [i_3] [i_3] = ((short) min((max((((/* implicit */unsigned long long int) var_9)), (13610210429458268765ULL))), (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */short) var_3)))))));
                /* LoopSeq 3 */
                for (short i_4 = 2; i_4 < 16; i_4 += 2) 
                {
                    var_15 = ((/* implicit */_Bool) var_7);
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 15; i_6 += 2) 
                        {
                            {
                                arr_21 [i_3] [i_3] [i_4] [i_5] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3])))))), (arr_1 [i_6 + 3])))) && (((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_2)) : (-1264136478905723414LL))))))));
                                arr_22 [i_2] [(short)14] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2 - 2] [i_4]))) : (7110447534028059598ULL)))) ? ((-(12304469217019484690ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2])) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_15 [i_3] [i_3] [4ULL]))))))))));
                                arr_23 [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_2 - 1])))))));
                                arr_24 [i_2] [3LL] [i_3] [i_4] [i_5] [i_6] [12ULL] = ((/* implicit */long long int) (-(((((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3]))) > (-5546282796926744832LL))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) 14048497128949531995ULL)))))))));
                            }
                        } 
                    } 
                    arr_25 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_4 - 1])) && (((/* implicit */_Bool) var_7))))) > ((((~(((/* implicit */int) var_9)))) << ((((~(var_0))) + (2011647104)))))));
                }
                for (unsigned long long int i_7 = 2; i_7 < 17; i_7 += 1) /* same iter space */
                {
                    var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_15 [i_3] [i_3] [i_3]))))), (min((arr_6 [i_2 + 3]), (arr_6 [i_2 + 1])))));
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 18; i_8 += 4) 
                    {
                        for (unsigned int i_9 = 2; i_9 < 17; i_9 += 1) 
                        {
                            {
                                arr_34 [i_2] [i_2] [i_3] [i_7] [(unsigned char)9] [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_2 - 1] [(signed char)11])) ? (var_11) : (((/* implicit */unsigned long long int) arr_17 [i_2] [i_3] [i_7 - 2])))) > (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (arr_15 [i_3] [i_3] [i_3])))))));
                                var_17 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_3 [i_2] [i_2 + 2])) ? (((/* implicit */unsigned long long int) (+(var_2)))) : (max((((/* implicit */unsigned long long int) 0LL)), (15015136409602084089ULL)))))));
                                arr_35 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_2] [i_2] [i_2])))))) : (arr_7 [i_8]))))));
                            }
                        } 
                    } 
                    var_18 *= ((signed char) 1264136478905723414LL);
                }
                /* vectorizable */
                for (unsigned long long int i_10 = 2; i_10 < 17; i_10 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (short)-26314))) ? (((-5546282796926744832LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)26314))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_3))))))))));
                    arr_39 [i_3] [i_3] [i_10] = (~(((/* implicit */int) arr_11 [i_3])));
                    var_20 = ((/* implicit */unsigned int) ((arr_28 [i_10 + 1]) << (((arr_36 [(_Bool)1]) - (115254772U)))));
                    arr_40 [i_10 + 1] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_2] [i_3] [i_10]))) : (-5546282796926744832LL)));
                }
                arr_41 [i_3] [i_3] [i_2] = ((/* implicit */short) (unsigned char)236);
            }
        } 
    } 
}
