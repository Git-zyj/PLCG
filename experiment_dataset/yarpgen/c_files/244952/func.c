/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244952
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
    var_10 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_6)), (var_3)));
    var_11 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)118))))), (var_0))))) <= (((((-5970461379339018343LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-2))))) ? (var_3) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)26)))))))));
    var_12 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) (unsigned char)236)) : (((/* implicit */int) (unsigned short)4068))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)4)) ? (1901943711U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)227)))))) : (min((4271623852810364866LL), (((/* implicit */long long int) (unsigned char)36))))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) 268435455ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127))) : (13141970585624873742ULL)))) ? (((((/* implicit */_Bool) 1U)) ? (11814482192887849266ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)50061)) ? (1095457150U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)236)), ((unsigned short)9)))) ? (((((/* implicit */_Bool) 1095457165U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)145))) : (-5970461379339018343LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)50876)))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)18075))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)4)) && (((/* implicit */_Bool) -5970461379339018358LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)208))))))))));
                            var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)227)) ? ((-(((/* implicit */int) (unsigned char)140)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14636))) : (3349186356U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967292U)) ? (8681205181753819292ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)98)))))))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */long long int) min((var_15), ((-(((3762244891027711960LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)237)))))))));
                var_16 ^= ((/* implicit */unsigned long long int) (signed char)12);
            }
        } 
    } 
}
