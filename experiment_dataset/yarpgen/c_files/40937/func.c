/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40937
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    {
                        var_13 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_2]))));
                        arr_12 [i_0] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115))) : (8005251404466195195ULL))));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (-(var_8))))));
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 12; i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] = ((/* implicit */short) (((+(11120171159624033431ULL))) % (var_6)));
        /* LoopNest 3 */
        for (signed char i_5 = 1; i_5 < 10; i_5 += 4) 
        {
            for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    {
                        var_15 &= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)47)) != (((/* implicit */int) var_4))));
                        arr_24 [i_4] [i_4] [i_6] [i_7] = ((/* implicit */unsigned long long int) var_8);
                        arr_25 [i_6] [i_4] [i_6] = (~((~(var_5))));
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 2; i_8 < 10; i_8 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned char) (-(arr_13 [i_4] [i_4])));
                            arr_29 [i_4] [i_5] [i_5 + 1] = (-(var_9));
                            arr_30 [i_8 + 1] [i_8] [i_8 + 1] [i_4] [i_8] [i_8] [i_8 - 2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3766132466U)) ? (var_6) : (((/* implicit */unsigned long long int) var_3)))))));
                            arr_31 [i_4] [i_5 + 1] [i_5 + 1] [i_5 - 1] [(short)0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4611873998124860961ULL)) ? (((/* implicit */int) (signed char)-48)) : (((/* implicit */int) arr_17 [i_4] [i_5 + 2] [i_6]))))) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) arr_6 [i_5 + 1]))));
                        }
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_9 = 0; i_9 < 10; i_9 += 1) 
    {
        arr_35 [i_9] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (unsigned char)118)))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38596))) >= (arr_7 [i_9] [i_9]))))));
        var_17 -= ((/* implicit */unsigned long long int) (signed char)47);
    }
    var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) 3766132466U))))) ? (max((((/* implicit */unsigned long long int) var_3)), (var_11))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-34))))))) >= (max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_12)) : (var_11))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4)))))))));
    var_19 = ((/* implicit */unsigned long long int) var_8);
}
