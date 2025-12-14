/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40242
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
    var_20 = ((/* implicit */unsigned short) min((max((var_12), (((/* implicit */unsigned int) (short)(-32767 - 1))))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_21 = (short)4095;
        var_22 += ((/* implicit */unsigned int) ((signed char) ((short) var_3)));
        var_23 += ((/* implicit */unsigned int) 39492387);
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) /* same iter space */
    {
        var_24 &= ((/* implicit */short) ((((/* implicit */long long int) 1265358927U)) / (2073393071094565459LL)));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                for (short i_4 = 2; i_4 < 21; i_4 += 4) 
                {
                    {
                        var_25 = ((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) var_7)))));
                        arr_14 [20U] [i_2] [(_Bool)1] [i_4] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (((-(((/* implicit */int) var_6)))) - (((/* implicit */int) arr_2 [i_4 - 1]))))), (max((2073393071094565459LL), (2073393071094565451LL)))));
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)64)) % (((/* implicit */int) (unsigned char)67))));
                    }
                } 
            } 
        } 
        var_27 &= ((/* implicit */_Bool) (~(max((((((/* implicit */_Bool) var_0)) ? (var_16) : (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) var_0))))));
    }
    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            arr_19 [i_5] [(unsigned short)4] = ((/* implicit */short) (+(((/* implicit */int) var_0))));
            arr_20 [i_5] [i_5] [i_6] = ((/* implicit */long long int) ((unsigned int) var_15));
            arr_21 [i_5] = ((/* implicit */short) var_12);
            var_28 = ((/* implicit */long long int) var_9);
        }
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 22; i_7 += 3) 
        {
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                {
                    var_29 ^= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2060035003U)) ? (-2073393071094565440LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65533)))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)3840)) / (((/* implicit */int) (short)12174))))) : (((((/* implicit */long long int) ((/* implicit */int) var_5))) - (var_13)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3730)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-37))) : (1128139875982975625ULL)))) ? ((+(17318604197726575991ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_17 [(short)19] [i_7] [i_8 - 1])))))))));
                    arr_27 [i_5] [i_8] [i_8 - 1] [i_7] = ((/* implicit */long long int) ((((arr_22 [i_8] [i_8 - 1] [i_8]) >= (arr_22 [(unsigned short)0] [i_8 - 1] [(unsigned short)7]))) ? (((/* implicit */int) ((arr_22 [i_8 - 1] [i_8 - 1] [i_8 - 1]) >= (((/* implicit */long long int) 2060035003U))))) : ((+(-2142422903)))));
                    var_30 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? ((~(arr_26 [i_5] [i_7] [i_5] [i_8]))) : (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)24576)), (-732353364))))))) ? (((((/* implicit */_Bool) (unsigned short)37980)) ? (-636019767904382529LL) : (-2073393071094565459LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_5 [i_7]))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17457))) : (164294104U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_5] [i_7] [i_8 - 1] [i_7])))))));
                    var_31 = (~(((/* implicit */int) (((!(((/* implicit */_Bool) var_3)))) && (((/* implicit */_Bool) 17318604197726575990ULL))))));
                }
            } 
        } 
    }
    var_32 = ((/* implicit */short) ((unsigned int) var_8));
    var_33 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2234932293U)) ? (((((/* implicit */int) (short)12158)) + (((/* implicit */int) (unsigned char)158)))) : (-1187545135)));
    var_34 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : ((+(18446744073709551606ULL)))))));
}
