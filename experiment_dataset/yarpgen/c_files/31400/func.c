/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31400
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
    var_19 = ((/* implicit */unsigned char) var_10);
    var_20 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_8)))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)128))) % (-9064608902339940344LL))))));
    var_21 = ((/* implicit */unsigned int) var_11);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [(signed char)6] [i_0 + 2])) ? (((/* implicit */int) arr_1 [4U] [i_0 - 1])) : (((/* implicit */int) arr_1 [(signed char)8] [i_0 - 1])))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((int) (_Bool)1)))));
                    var_24 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_2])) ? (((/* implicit */unsigned long long int) 3312346699287227155LL)) : (5512601057525526775ULL))));
                    var_25 -= ((((/* implicit */_Bool) (+(arr_6 [i_0] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(_Bool)1] [i_1 - 1] [i_2]))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (2354658866U))));
                    var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (12934143016184024854ULL)));
                }
            } 
        } 
        var_27 = (signed char)-31;
    }
    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        var_28 = ((/* implicit */unsigned char) min(((+(max((arr_9 [i_3] [i_3]), (6755399441055744LL))))), (((((/* implicit */_Bool) (signed char)96)) ? (-3837254085568403029LL) : (((/* implicit */long long int) 830339453))))));
        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) var_5))));
        var_30 = ((/* implicit */short) -3063987982471746051LL);
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 2; i_4 < 12; i_4 += 3) 
        {
            arr_12 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3] [1] [12U])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)24)))))) ? (((((/* implicit */_Bool) 7944747193720464600ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (12898601127989188666ULL))) : (((/* implicit */unsigned long long int) min((1940308434U), (((/* implicit */unsigned int) (signed char)31)))))))));
            arr_13 [(_Bool)1] [(_Bool)1] [i_4] = (((!(((/* implicit */_Bool) var_10)))) ? (((((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_4 + 2])) ? (arr_9 [i_3] [i_4 - 1]) : (((/* implicit */long long int) 124)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_31 = ((/* implicit */signed char) ((((288230375077969920LL) < (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3] [i_5]))))) && (arr_8 [(_Bool)1] [i_5])));
            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (+(((((/* implicit */int) (signed char)-72)) / (((/* implicit */int) (signed char)-42)))))))));
        }
    }
    for (long long int i_6 = 0; i_6 < 21; i_6 += 3) 
    {
        arr_18 [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)215)) ? (((/* implicit */unsigned int) arr_16 [i_6])) : (3271662800U)));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 21; i_7 += 1) 
        {
            for (unsigned char i_8 = 0; i_8 < 21; i_8 += 3) 
            {
                {
                    arr_23 [i_7] [i_6] = ((/* implicit */unsigned int) (+(max((arr_16 [i_6]), (((/* implicit */int) arr_22 [i_6]))))));
                    arr_24 [i_6] [i_6] [i_7] [(_Bool)1] = ((/* implicit */long long int) arr_16 [i_6]);
                    var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? ((-(((((/* implicit */long long int) ((/* implicit */int) var_18))) + (17178820608LL))))) : (((var_9) - (((/* implicit */long long int) arr_16 [i_6]))))));
                }
            } 
        } 
        var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) % (((/* implicit */int) (signed char)-53))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (min((max((((/* implicit */long long int) var_3)), (1055531162664960LL))), (((/* implicit */long long int) (-(((/* implicit */int) (short)3303)))))))));
    }
    for (unsigned short i_9 = 1; i_9 < 12; i_9 += 4) 
    {
        arr_28 [i_9] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_9] [i_9])), (((((/* implicit */_Bool) var_13)) ? (arr_11 [3] [3] [3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))) ? ((((~(var_4))) & (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)31)) & (((/* implicit */int) (signed char)31))))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))));
        arr_29 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((1940308434U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) var_14))))) && ((!(((/* implicit */_Bool) 0))))));
    }
    var_35 = ((/* implicit */int) var_18);
}
