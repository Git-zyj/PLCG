/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235989
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
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    {
                        var_11 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-10466)) ? (((/* implicit */int) (short)3678)) : (((/* implicit */int) (unsigned short)12312))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)6417)))))), (((/* implicit */int) (!(((/* implicit */_Bool) -7317894091468073654LL)))))));
                        var_12 |= ((/* implicit */int) ((unsigned char) ((2283865170634341907ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25))))));
                        var_13 = max((min((1053682911671961407ULL), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) ((unsigned int) (short)6417))));
                        var_14 = ((/* implicit */long long int) ((((/* implicit */int) (((+(6))) >= (((/* implicit */int) (_Bool)0))))) != (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-113)), ((unsigned short)44731))))));
                    }
                } 
            } 
        } 
        var_15 = min((((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)6417))))) ? ((~(var_8))) : ((+(((/* implicit */int) (unsigned short)44749))))))), (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) 4121906461108013833ULL)) ? (((/* implicit */long long int) var_7)) : (-8481086429082639296LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)26144))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            for (int i_5 = 3; i_5 < 15; i_5 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_19 [i_0] [i_0] = max((8481086429082639309LL), (((/* implicit */long long int) (signed char)-64)));
                        var_16 = ((((/* implicit */_Bool) var_0)) ? (max((9966155413794854060ULL), (((/* implicit */unsigned long long int) -6263485383958133680LL)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)17880))))));
                        arr_20 [8LL] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [(_Bool)1] = ((/* implicit */long long int) -1893728935);
                    }
                    var_17 = ((/* implicit */_Bool) max((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)63559)) : (((/* implicit */int) var_3))))), (5706962274141246551LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((9223372036854775807LL) & (-6549212503266111087LL)))) ? (((/* implicit */int) ((9223372036854775807LL) < (((/* implicit */long long int) ((/* implicit */int) var_9)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)92))))))))));
                }
            } 
        } 
        arr_21 [i_0] = ((/* implicit */unsigned short) 2097515086U);
    }
    for (unsigned short i_7 = 3; i_7 < 13; i_7 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((short) (((!(((/* implicit */_Bool) 2147483644)))) ? (((7297721867394185364LL) << (((((-7928111406169385721LL) + (7928111406169385732LL))) - (11LL))))) : (((/* implicit */long long int) ((/* implicit */int) max((var_6), (((/* implicit */unsigned short) (_Bool)0))))))))))));
        arr_24 [i_7] = ((/* implicit */_Bool) ((long long int) ((int) 5357478245948005595LL)));
    }
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? ((~(max((282072834800987102LL), (((/* implicit */long long int) (unsigned short)22)))))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
}
