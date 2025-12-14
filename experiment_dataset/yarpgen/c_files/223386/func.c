/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223386
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
        {
            arr_6 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
            arr_7 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)127)), (arr_1 [i_0])))) ? (min((((/* implicit */int) arr_1 [i_1])), (arr_0 [i_0]))) : (((/* implicit */int) max((arr_4 [i_0] [i_0] [i_1]), (arr_4 [i_1] [i_0] [i_0]))))))) != (((6111869980444562717ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4827)))))));
            var_12 += ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (6111869980444562709ULL)))) ? ((~(4184075693U))) : (((/* implicit */unsigned int) max((((/* implicit */int) arr_4 [i_0] [i_1] [i_1])), (arr_0 [i_0]))))))));
        }
        for (signed char i_2 = 0; i_2 < 15; i_2 += 4) /* same iter space */
        {
            var_13 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_0])) + (((/* implicit */int) arr_8 [i_2]))))), (((min((16517999741246058394ULL), (((/* implicit */unsigned long long int) (short)-5138)))) | (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */unsigned int) arr_5 [i_2])))))))));
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */int) var_5);
        }
        var_14 = ((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0]);
    }
    for (unsigned int i_3 = 2; i_3 < 9; i_3 += 4) 
    {
        arr_13 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)103)) ? (((/* implicit */int) (signed char)-22)) : ((-((~(((/* implicit */int) (signed char)-12))))))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 13; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    {
                        var_15 = ((/* implicit */signed char) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) -4516107859631369960LL))))), (arr_5 [i_5])));
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */long long int) max(((-(((/* implicit */int) (unsigned char)132)))), (((/* implicit */int) (signed char)12))))) < (((((/* implicit */_Bool) 3481709447U)) ? (3721739767442922223LL) : ((+(6874718921585071393LL)))))));
                        var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */long long int) min((3019956688U), (((/* implicit */unsigned int) (_Bool)1))))) : (((((/* implicit */_Bool) 4065334524U)) ? (8092915510975632058LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11922))))))) != (((((/* implicit */_Bool) arr_0 [i_6 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_3] [i_3 + 3] [i_4]))) : (((((/* implicit */_Bool) arr_3 [i_5])) ? (arr_20 [i_3] [i_3] [i_3] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_4] [i_4] [i_5] [i_6])))))))));
                    }
                } 
            } 
        } 
    }
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_6))));
    var_19 += ((/* implicit */_Bool) max(((~(((/* implicit */int) var_10)))), (((/* implicit */int) var_8))));
}
