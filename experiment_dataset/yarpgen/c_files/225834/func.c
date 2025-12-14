/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225834
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
    for (long long int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~((-(((/* implicit */int) (signed char)127))))))) + (2933659705U)));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (signed char i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_20 = ((_Bool) ((long long int) (-(((/* implicit */int) var_4)))));
                            arr_11 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 201956456845267681LL)) ? (-254091680608974434LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_1] = ((/* implicit */unsigned int) (signed char)45);
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) max((arr_8 [(_Bool)1] [9U] [(_Bool)1] [i_5]), (((/* implicit */unsigned long long int) (unsigned short)19188))))) ? ((~(2933659729U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 2933659715U)))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0)))))));
                            var_22 = ((/* implicit */_Bool) min((var_22), (var_17)));
                            var_23 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) (~(((/* implicit */int) (short)32748))))))));
                            arr_19 [i_0] [i_0] [i_4] [i_5] = ((/* implicit */int) (((!(((/* implicit */_Bool) -1408244602)))) || (((/* implicit */_Bool) arr_10 [i_5] [(signed char)0] [i_4] [i_1] [(short)9] [23]))));
                        }
                    } 
                } 
                arr_20 [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0 + 2])) ? (arr_1 [i_0 + 2]) : (((/* implicit */long long int) var_8))))), ((+(arr_8 [i_0 + 1] [i_0] [i_0 - 1] [i_0])))));
            }
        } 
    } 
    var_24 = ((/* implicit */short) 1361307578U);
    /* LoopNest 3 */
    for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
    {
        for (unsigned short i_7 = 1; i_7 < 20; i_7 += 2) 
        {
            for (long long int i_8 = 3; i_8 < 20; i_8 += 4) 
            {
                {
                    arr_27 [i_8] [i_7 + 2] [i_8] = ((/* implicit */unsigned int) 3483361382825919065LL);
                    arr_28 [(signed char)13] [i_7] [i_8] = ((/* implicit */long long int) ((((((var_9) | (((/* implicit */unsigned long long int) 2933659729U)))) * (((unsigned long long int) (_Bool)0)))) == (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_21 [i_7])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-10)))))))));
                    arr_29 [i_8] [i_7 + 2] [i_8] = ((/* implicit */signed char) ((unsigned long long int) arr_1 [i_7]));
                    var_25 = ((/* implicit */unsigned long long int) (signed char)-67);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_9 = 1; i_9 < 15; i_9 += 3) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (short i_11 = 0; i_11 < 16; i_11 += 1) 
            {
                {
                    var_26 = ((/* implicit */long long int) ((signed char) ((long long int) arr_8 [4LL] [4LL] [i_9 - 1] [4LL])));
                    var_27 = ((/* implicit */signed char) arr_34 [i_9] [i_10] [i_11]);
                    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)123)) / ((-(((/* implicit */int) arr_6 [i_9 + 1] [i_9 - 1] [i_9 + 1] [i_9]))))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) | (var_6))))))));
}
