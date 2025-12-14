/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31065
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) min((min((((((/* implicit */_Bool) var_17)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) var_16)))), (min((4063354371U), (arr_0 [i_0] [i_0]))))), (((/* implicit */unsigned int) ((int) (-(231612924U))))))))));
        arr_2 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) max(((!(((/* implicit */_Bool) 7958206469054243979LL)))), (((((/* implicit */_Bool) 4063354353U)) || (((/* implicit */_Bool) arr_0 [i_0] [i_0 - 2])))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((int) (signed char)-109));
    }
    for (unsigned short i_1 = 2; i_1 < 20; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            arr_10 [15] [15] = ((/* implicit */unsigned long long int) ((((231612927U) << (((((arr_4 [i_1] [i_1]) * (arr_8 [i_2] [i_1] [(unsigned char)9]))) - (3612813870U))))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (267911168U)))) ? (((/* implicit */long long int) -1813344930)) : (arr_5 [i_1 + 2]))) - (6161806000542912517LL)))));
            var_19 ^= ((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_1 + 3])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3310182602794834067LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))) : (max((((/* implicit */unsigned int) var_13)), (231612925U))))) + (((/* implicit */unsigned int) (+(((1) - (-2))))))));
        }
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 22; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                {
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_13))));
                    var_21 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (unsigned char)181)), ((~(max((((/* implicit */unsigned long long int) var_2)), (4499123193638689192ULL)))))));
                    arr_16 [i_1] [(short)3] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)44)) ? (231612925U) : (1879048192U)))) ? (max((arr_7 [i_3 - 2]), (((/* implicit */int) ((unsigned short) -2022779340))))) : (-2125590859)));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (long long int i_5 = 2; i_5 < 18; i_5 += 4) 
    {
        for (int i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            for (unsigned int i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                {
                    arr_27 [i_5 + 3] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) 212513592);
                    var_22 = ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)24195))) > (8088785497008879054LL))), ((_Bool)1)));
                    arr_28 [i_5 + 1] [i_6] [i_6] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (var_8)))) ? (4174124887U) : (arr_4 [i_5 + 3] [19U])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((min((((/* implicit */unsigned int) var_5)), (var_8))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_5] [17ULL]))))))) : ((+(((4151803163U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58126))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) var_1);
}
