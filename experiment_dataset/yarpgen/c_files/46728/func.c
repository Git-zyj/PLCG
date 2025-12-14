/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46728
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
    var_10 = ((/* implicit */unsigned char) ((int) (-(((/* implicit */int) var_4)))));
    var_11 = ((/* implicit */int) var_2);
    var_12 = var_5;
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (((+(((arr_0 [i_0] [4U]) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0 + 3]))))))) << (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)200))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_2 [i_0])), (2906485145U)))))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0 - 1] [i_1] [(unsigned char)13])) ^ (((/* implicit */int) arr_2 [i_0 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2906485145U)))))) : (max((((/* implicit */unsigned long long int) arr_2 [i_0 + 3])), (arr_1 [i_0 + 3])))));
            var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((1388482151U), (1388482150U))))))) != (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-91))) != (1388482167U))))));
        }
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) /* same iter space */
        {
            arr_11 [i_0 + 2] [(_Bool)1] [i_2] |= ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (15145125934415915685ULL)))))) ? (min((((/* implicit */unsigned int) (_Bool)1)), (max((3605947158U), (((/* implicit */unsigned int) (_Bool)1)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))));
            /* LoopNest 3 */
            for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    for (int i_5 = 4; i_5 < 13; i_5 += 1) 
                    {
                        {
                            var_15 = ((unsigned char) ((((/* implicit */_Bool) arr_15 [i_0 + 3] [i_0 + 1] [i_0])) ? (arr_15 [i_0 + 2] [i_0 + 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-16384)))));
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) * (max((1388482178U), (((/* implicit */unsigned int) var_4))))))) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])) : (((((/* implicit */int) (unsigned char)31)) % (arr_5 [i_0])))));
                        }
                    } 
                } 
            } 
            var_17 = ((((/* implicit */_Bool) var_8)) ? (((((((/* implicit */int) (unsigned char)39)) >= (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 3918080631U)))) : (((((/* implicit */_Bool) 2906485129U)) ? (((/* implicit */unsigned int) 0)) : (1388482179U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_7) == (((/* implicit */unsigned int) arr_5 [i_0])))))));
        }
        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 1) 
            {
                for (unsigned int i_8 = 2; i_8 < 12; i_8 += 1) 
                {
                    {
                        var_18 = ((/* implicit */int) arr_20 [i_0 - 1]);
                        arr_25 [i_0] = max((((/* implicit */int) (!((!(((/* implicit */_Bool) var_9))))))), (((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) (unsigned char)89)) : (((/* implicit */int) arr_0 [i_0 + 3] [i_8 + 1])))));
                    }
                } 
            } 
            var_19 *= (unsigned char)30;
            var_20 = ((/* implicit */unsigned char) max((((/* implicit */int) min((arr_16 [0U] [i_0 - 1] [i_0] [i_0] [i_0]), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_9)))))))), ((~(119763159)))));
        }
        for (unsigned char i_9 = 0; i_9 < 14; i_9 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) arr_7 [i_0])), (max((var_6), (((/* implicit */unsigned long long int) 0)))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 15961774987891616627ULL)) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) (_Bool)1)))) == (119763159)))))));
            arr_28 [i_0] = ((((/* implicit */_Bool) (unsigned char)136)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0 - 1]))) : (15745073417704645769ULL));
            var_22 = ((/* implicit */int) ((unsigned long long int) max((arr_10 [i_0]), ((unsigned char)136))));
        }
    }
}
