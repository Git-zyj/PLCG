/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204320
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
    var_16 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)161))))))) ? (max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)27432)) : (((/* implicit */int) (unsigned short)65535)))))) : (((((/* implicit */_Bool) (-(var_6)))) ? (min((var_12), (-1214870361))) : (((/* implicit */int) ((unsigned char) 539414198)))))));
    var_17 = ((/* implicit */unsigned short) var_13);
    var_18 = (short)8729;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        {
                            arr_11 [i_1] [i_1] = ((/* implicit */unsigned int) (short)-8733);
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-8727)) ? (-867774630) : (((((/* implicit */_Bool) (unsigned short)56217)) ? (((/* implicit */int) (short)-8729)) : (((((/* implicit */_Bool) (short)-8730)) ? (((/* implicit */int) (short)8729)) : (((/* implicit */int) (short)8733))))))));
                            var_20 = ((/* implicit */int) ((_Bool) max((((unsigned long long int) (unsigned char)110)), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_3] [i_3 + 4] [i_3 + 4] [i_3])) % (((/* implicit */int) (unsigned char)159))))))));
                            var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)8732))));
                        }
                    } 
                } 
                var_22 = (+(((int) ((unsigned short) (short)32744))));
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_14), (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) (_Bool)0)) : (-410365563)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((((/* implicit */int) (short)8733)) < (-553253017))), ((!(((/* implicit */_Bool) var_10)))))))) : (min((((unsigned long long int) 539414204)), (((/* implicit */unsigned long long int) (((_Bool)1) ? (arr_6 [i_0] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16383))))))))));
                arr_12 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_2 [i_0])) << (((/* implicit */int) arr_2 [i_1])))), ((~(((/* implicit */int) arr_0 [i_0] [i_1]))))));
            }
        } 
    } 
}
