/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22333
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
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((((/* implicit */_Bool) ((long long int) max((0ULL), (((/* implicit */unsigned long long int) (signed char)127)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) min((-1LL), (((/* implicit */long long int) var_9))))) <= (((var_6) - (((/* implicit */unsigned long long int) var_2)))))))) : (min((((unsigned long long int) (signed char)-115)), (((((/* implicit */_Bool) var_8)) ? (15305124012968104825ULL) : (0ULL)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_15 = (~(arr_3 [i_0] [i_1]));
                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_2 [i_0]), (arr_2 [i_1])))) ? (((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) arr_2 [i_1])))) : ((-(((/* implicit */int) arr_2 [i_0])))))))));
                arr_6 [11LL] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((signed char) ((unsigned short) (signed char)118)));
                arr_7 [i_1] = ((/* implicit */long long int) min((max((min((((/* implicit */unsigned long long int) var_12)), (arr_3 [i_0] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)127)) + (((/* implicit */int) arr_2 [i_0]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-121))) > ((-(4123583698411536042ULL))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                {
                    arr_15 [i_2] [i_2] [i_4] = ((/* implicit */signed char) max((max((18446744073709551609ULL), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_11 [i_2] [i_2] [i_4])))) & (((/* implicit */int) ((((/* implicit */int) (signed char)-121)) > (((/* implicit */int) arr_11 [i_2 + 3] [i_3] [i_4]))))))))));
                    var_17 = ((/* implicit */unsigned long long int) (-(max(((~(arr_10 [6ULL] [i_3]))), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)111)))))))));
                }
            } 
        } 
        arr_16 [(_Bool)1] [(_Bool)1] = ((/* implicit */signed char) min((((arr_8 [i_2]) - (((/* implicit */unsigned long long int) (+(arr_10 [i_2 - 1] [i_2])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_2 + 2] [i_2 - 1] [i_2])) ? (0ULL) : (((/* implicit */unsigned long long int) -3571514232685007464LL))))) ? (max((4123583698411536035ULL), (((/* implicit */unsigned long long int) (signed char)(-127 - 1))))) : (max((((/* implicit */unsigned long long int) arr_9 [i_2])), (19ULL)))))));
        arr_17 [i_2] [i_2] |= ((/* implicit */unsigned char) min(((+(((((/* implicit */_Bool) -3571514232685007464LL)) ? (arr_10 [i_2 + 2] [i_2 + 2]) : (arr_10 [i_2] [i_2 + 2]))))), (((/* implicit */long long int) (unsigned short)31853))));
    }
    for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
    {
        arr_20 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 14323160375298015557ULL)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_18 [i_5]))) ? (((/* implicit */int) ((_Bool) 2435987979145511807ULL))) : (((/* implicit */int) arr_19 [i_5]))))) : (max((((/* implicit */unsigned long long int) (signed char)-27)), (13434856335590368531ULL)))));
        arr_21 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((unsigned long long int) (signed char)110)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_19 [i_5])))))))) ? (((((/* implicit */_Bool) (-(var_7)))) ? (((/* implicit */int) ((unsigned short) var_4))) : (((/* implicit */int) arr_18 [(signed char)21])))) : (((((/* implicit */int) arr_19 [i_5])) % (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_5]))) <= (18446744073709551615ULL))))))));
    }
    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 4) 
    {
        var_18 = ((/* implicit */short) (-((+(((6460618283600254316LL) + (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_6] [i_6])))))))));
        arr_24 [i_6] [i_6] = ((/* implicit */signed char) max(((-(((/* implicit */int) ((signed char) arr_19 [i_6]))))), (((/* implicit */int) (unsigned char)47))));
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (signed char)-106))));
    }
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_3))));
}
