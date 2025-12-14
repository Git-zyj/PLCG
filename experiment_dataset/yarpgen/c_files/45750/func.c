/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45750
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
    for (int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_9 [9ULL] [i_1] = max((((unsigned short) (unsigned short)0)), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) 5425991893551282900ULL))) && (((/* implicit */_Bool) min((13020752180158268715ULL), (((/* implicit */unsigned long long int) 2282204012U)))))))));
                    var_12 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (2147483647) : (-1618876489)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-8013)) ? (((/* implicit */int) (unsigned char)131)) : (((/* implicit */int) (unsigned short)0))))))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) >= (((((/* implicit */_Bool) 2282204012U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (218169059U)))))));
                    var_13 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (short)32767)), (15755150751080855734ULL)));
                    var_14 = ((/* implicit */int) ((((_Bool) ((((/* implicit */_Bool) 234086722U)) ? (((/* implicit */unsigned int) 1634914006)) : (3981460749U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1634914021)) ? (-2526274023749432179LL) : (((/* implicit */long long int) -1618876480))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3841382050U)) ? (1730335605) : (((/* implicit */int) (unsigned short)7))))) : (max((3058025881U), (((/* implicit */unsigned int) 0))))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1629226275U)) * (15755150751080855724ULL)))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-21)) ? (6758388622440124882LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21877))))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) max((4166545723044298015ULL), (((/* implicit */unsigned long long int) 0))));
}
