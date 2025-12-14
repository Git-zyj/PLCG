/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39617
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_0] [i_3] = ((((/* implicit */_Bool) 1082066697615811176ULL)) ? (min((((var_8) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17524))))), (((/* implicit */unsigned long long int) min(((unsigned char)160), (((/* implicit */unsigned char) var_6))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) | (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)8)), ((unsigned char)0))))))));
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)249))))) + (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 9188420113625002311ULL)))) : (9212840630008039721LL)))));
                            arr_11 [i_3] [i_0] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) min(((unsigned char)249), ((unsigned char)74)))) : (((((/* implicit */int) (unsigned char)104)) >> (((((/* implicit */int) (unsigned char)194)) - (168)))))));
                            var_16 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)3)))) + (2147483647))) << ((((+(var_4))) - (16222187628693150537ULL)))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (signed char)-40)) : (((/* implicit */int) (_Bool)1))))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (16681544235102044955ULL))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_12) : (var_5)))) ? (max((((/* implicit */unsigned long long int) (signed char)96)), (var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned char)199))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) (_Bool)1);
}
