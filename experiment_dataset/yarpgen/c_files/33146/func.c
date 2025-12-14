/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33146
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 1) /* same iter space */
                    {
                        var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_2) : (8512760411186976968ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)240)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_4))))))))));
                        arr_12 [i_0] = ((/* implicit */long long int) var_6);
                    }
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_4] [i_2] [i_1] [i_0] = var_10;
                        arr_16 [i_0] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_6 [i_0] [i_0 + 1]))));
                    }
                    for (signed char i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
                    {
                        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 9933983662522574632ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)2))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((short) (unsigned char)49))))))));
                        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned char) var_5))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_0] [(unsigned short)20])) - (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) (unsigned char)207))))) : (((((((/* implicit */_Bool) 1688448975078694283LL)) || (((/* implicit */_Bool) var_0)))) ? (1529657417041136203LL) : (((long long int) var_0)))))))));
                        var_14 += ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) min((var_3), ((_Bool)1))))))) || (max(((!(((/* implicit */_Bool) var_9)))), (((((/* implicit */int) var_3)) == (((/* implicit */int) (short)8144))))))));
                    }
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))) == (((((/* implicit */_Bool) arr_1 [(_Bool)0] [i_1])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))), ((-(arr_6 [i_1] [i_0 + 1]))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) var_10)) : (max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))))))));
    var_17 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) min((var_0), (((/* implicit */short) ((unsigned char) var_9)))))) : (((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (unsigned int i_6 = 1; i_6 < 16; i_6 += 1) 
    {
        for (unsigned int i_7 = 0; i_7 < 18; i_7 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) ((short) ((unsigned char) var_4)));
                arr_26 [i_6] [i_7] [i_7] = ((/* implicit */signed char) var_3);
                arr_27 [i_6] [12ULL] [(short)12] = 9933983662522574632ULL;
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_7)))))) ? (((unsigned long long int) var_3)) : (((((/* implicit */_Bool) ((var_2) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
            }
        } 
    } 
}
