/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195220
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
    var_13 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)10830)), (var_9)))), (min((var_6), (((/* implicit */unsigned long long int) (short)-5168)))))), (min((13965016179275124931ULL), (((/* implicit */unsigned long long int) min(((short)-5154), (((/* implicit */short) var_12)))))))));
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (unsigned short)10830))));
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) (signed char)84))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */int) ((max((var_11), (min((var_6), (((/* implicit */unsigned long long int) (unsigned short)43155)))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) max((var_3), (((/* implicit */short) (_Bool)1))))), (max((var_9), (((/* implicit */unsigned int) var_3)))))), (((/* implicit */unsigned int) min((max((((/* implicit */short) var_8)), ((short)17096))), (max((((/* implicit */short) (unsigned char)78)), (var_3))))))));
                                arr_14 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) var_8);
                            }
                        } 
                    } 
                } 
                arr_15 [i_1] [i_0] = ((/* implicit */signed char) max((min((((/* implicit */short) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_12))))), (max((((/* implicit */short) var_7)), ((short)-32))))), (min((((/* implicit */short) ((((/* implicit */int) var_0)) != (((/* implicit */int) (unsigned short)22688))))), (max(((short)-9030), (((/* implicit */short) (_Bool)0))))))));
                /* LoopSeq 1 */
                for (unsigned char i_5 = 2; i_5 < 20; i_5 += 4) 
                {
                    arr_18 [i_0] = ((/* implicit */signed char) var_8);
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) max((((/* implicit */short) var_0)), (var_3)))), (((var_6) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))), (((/* implicit */unsigned long long int) max((min(((short)9039), (((/* implicit */short) var_0)))), (((/* implicit */short) var_8)))))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)0)), ((unsigned short)10830))))) | (min((((/* implicit */long long int) (unsigned char)129)), (7870196512254888783LL)))))) * (min((min((4481727894434426684ULL), (((/* implicit */unsigned long long int) (unsigned char)178)))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (-1223736382))))))));
                            }
                        } 
                    } 
                }
                var_20 *= min((((/* implicit */unsigned long long int) var_2)), (652479687697233837ULL));
            }
        } 
    } 
    var_21 &= ((/* implicit */_Bool) max((683749511926050501ULL), (((/* implicit */unsigned long long int) max((max((-2787999675728473708LL), (((/* implicit */long long int) (unsigned char)56)))), (((/* implicit */long long int) min(((signed char)124), ((signed char)127)))))))));
}
