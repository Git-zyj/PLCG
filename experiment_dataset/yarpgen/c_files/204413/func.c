/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204413
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
    var_20 = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) ((var_17) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) && (((/* implicit */_Bool) ((10765251490516682687ULL) - (17882394023031639780ULL))))))), (((((/* implicit */int) ((_Bool) (_Bool)1))) << (((/* implicit */int) min(((_Bool)1), (var_10))))))));
    var_21 -= ((/* implicit */unsigned int) ((_Bool) (_Bool)1));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        var_22 = (((_Bool)1) ? (13132645781839057063ULL) : (6131727466322942126ULL));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4880429737401141993ULL)) ? (180599987U) : (180599987U)));
    }
    var_23 = ((/* implicit */unsigned long long int) (((-(((12495899777598068180ULL) & (17837116798930092266ULL))))) < (((/* implicit */unsigned long long int) (-(4111944112U))))));
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                var_24 = min((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) 1329511245049346154ULL)) ? (2ULL) : (18446744073709551615ULL))));
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 3; i_3 < 19; i_3 += 1) 
                {
                    arr_10 [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 26ULL)) ? (((((/* implicit */_Bool) 29ULL)) ? (1079937740195201457ULL) : (15ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_5)))))))))));
                    /* LoopSeq 3 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_25 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_17)) ? (var_0) : (((/* implicit */unsigned long long int) 458389985U))))))) ? (13302848315772514631ULL) : (((/* implicit */unsigned long long int) 4294967279U))));
                        var_26 = ((/* implicit */unsigned long long int) (_Bool)0);
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        var_27 -= ((/* implicit */_Bool) (+(1934406885404794499ULL)));
                        var_28 = var_9;
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_19 [i_1] [i_1] [i_3 + 1] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(417527930U)))) ? (((/* implicit */int) ((9956269682345643640ULL) != (4680815887205261221ULL)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) (~(((min((var_15), (((/* implicit */unsigned long long int) var_4)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))))));
                            var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 6715853448035317533ULL))));
                            arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : ((-(((arr_17 [i_1] [i_1] [i_1] [i_1]) / (arr_20 [i_2] [i_2] [i_2])))))));
                        }
                        var_31 = ((/* implicit */unsigned long long int) var_13);
                        arr_24 [i_1] [i_6] [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */unsigned int) 1775782017959596280ULL);
                        arr_25 [i_1] [i_2] [i_3] [i_6] = var_17;
                    }
                    var_32 -= ((/* implicit */_Bool) 4114367292U);
                }
                var_33 = ((/* implicit */_Bool) (-(180600009U)));
                arr_26 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((unsigned long long int) 0ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) ((unsigned int) (-(18446744073709551614ULL))))) : (((((((/* implicit */_Bool) 180599959U)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) ^ (((/* implicit */unsigned long long int) 417527930U)))));
            }
        } 
    } 
}
