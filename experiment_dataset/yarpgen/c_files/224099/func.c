/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224099
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */short) max(((-(var_14))), (((/* implicit */unsigned long long int) min((var_0), (((/* implicit */unsigned int) (unsigned char)255)))))));
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)14893))) ? (((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned short) (unsigned char)255))))) ? (((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((/* implicit */int) (short)-8799))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (unsigned char)248)))))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */long long int) 3086084373U);
                        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((short) max((((/* implicit */int) (_Bool)0)), (-1652141237)))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        var_18 |= ((/* implicit */short) ((unsigned short) -5389738280860733685LL));
                        var_19 = ((/* implicit */_Bool) (+(max((min((3086084373U), (((/* implicit */unsigned int) (signed char)0)))), (((/* implicit */unsigned int) max((var_8), (((/* implicit */unsigned char) (signed char)48)))))))));
                        arr_14 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (762139023597121452ULL)))) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned short) var_8)), (var_3))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(8625408418074551052LL)))) ? (((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (-378807304657150715LL))) : (((/* implicit */long long int) (~(((/* implicit */int) var_8)))))));
                        arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-((+(23U)))));
                        var_21 = ((/* implicit */long long int) ((unsigned short) 5389738280860733679LL));
                    }
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -5389738280860733679LL)) ? (3173949994U) : (((/* implicit */unsigned int) (-2147483647 - 1)))));
                    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) (signed char)48)))))));
                    arr_18 [i_0] [i_0] [i_2] = ((/* implicit */signed char) (-((~(var_12)))));
                    var_24 = ((/* implicit */long long int) max(((+((~(2888077297U))))), (((/* implicit */unsigned int) ((int) (short)-27277)))));
                }
                /* vectorizable */
                for (long long int i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    var_25 = ((/* implicit */unsigned char) (short)27277);
                    arr_22 [i_0] [i_0] [i_0] |= ((/* implicit */signed char) ((long long int) 2603584135U));
                }
                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) min((-514883123), (((/* implicit */int) (short)32750)))))));
            }
        } 
    } 
    var_27 = ((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) var_1)) ? (16667563749044033682ULL) : (((/* implicit */unsigned long long int) var_1))))))));
    var_28 = ((/* implicit */int) ((unsigned long long int) min((var_5), (((/* implicit */long long int) min((var_10), (var_10)))))));
    /* LoopNest 2 */
    for (unsigned char i_7 = 3; i_7 < 22; i_7 += 3) 
    {
        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 4) 
        {
            {
                var_29 = ((/* implicit */unsigned int) (_Bool)1);
                var_30 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (+(var_1)))) ? (((((/* implicit */_Bool) var_7)) ? (1048575LL) : (var_7))) : ((-(var_5))))));
                var_31 = ((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) (short)32747)))));
                var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) (signed char)48)))))))));
            }
        } 
    } 
}
