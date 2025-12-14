/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202261
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
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) arr_3 [i_2 - 1]);
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        var_19 = ((unsigned char) max(((unsigned short)55914), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)9616)))))));
                        var_20 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)9622)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)144))) : (13907840424344313327ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_17)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)112))) : (((max((237671552310963803LL), (arr_1 [i_3]))) % (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0])))))));
                        var_21 += ((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)120)), (max((arr_3 [i_2 - 2]), (((/* implicit */long long int) max(((short)(-32767 - 1)), (((/* implicit */short) (unsigned char)112)))))))));
                        var_22 = (!(((/* implicit */_Bool) (~(arr_1 [i_1])))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)17)), (13907840424344313334ULL)));
                        arr_13 [i_4] [i_1] [i_2] [i_4] [i_4] = ((/* implicit */long long int) ((unsigned char) max((((/* implicit */short) ((signed char) (_Bool)0))), (var_17))));
                    }
                    var_24 = ((/* implicit */unsigned char) ((unsigned long long int) ((var_15) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-118))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */long long int) var_8);
    /* LoopSeq 1 */
    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        var_26 -= ((/* implicit */unsigned char) arr_14 [i_5] [i_5]);
        var_27 = ((/* implicit */signed char) (-(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)22)), ((unsigned short)4856))))));
        var_28 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) >= (12586669739059917182ULL))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_3)))));
        var_29 = ((/* implicit */unsigned short) (signed char)-118);
    }
}
